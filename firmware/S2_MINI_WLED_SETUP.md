# S2 Mini LED and WLED setup

This records the working setup for the WEMOS/LOLIN S2 Mini used in the mini LED lamp.

## Hardware

- Board target: `lolin_s2_mini`
- Detected chip: ESP32-S2FNR2
- Flash: 4 MB
- PSRAM: 2 MB
- LED: one WS2812-compatible RGB pixel
- LED power: `VBUS` (+5 V from USB)
- LED ground: `GND`
- LED data input (`DIN`): GPIO16
- Pixel colour order: GRB

Connect to the pixel's `DIN`, not `DOUT`. The controller and pixel must share ground.

## Why the COM port changes

The ESP32-S2 uses native USB. Windows can assign a different COM number to each USB mode:

- normal application firmware;
- the 1200-baud reset transition;
- the ROM download bootloader;
- the newly installed application.

During the successful setup, the same physical board appeared as COM4, COM5, and COM6. Always enumerate ports again after a reset instead of assuming the old number remains valid.

An ESP32-S2 ROM bootloader appeared as:

```text
USB VID:PID = 303A:0002
USB Serial Device
```

Useful Windows checks:

```powershell
[System.IO.Ports.SerialPort]::GetPortNames()
pnputil /enum-devices /connected /class Ports
```

## Entering the ROM bootloader manually

If automatic upload reset stalls at `Connecting...`:

1. Hold **BOOT**.
2. Press and release **RESET**.
3. Release **BOOT**.
4. Enumerate the COM ports again.

If that fails, hold **BOOT** while unplugging and reconnecting USB, then release it.

If Windows says access to the COM port is denied after an interrupted upload, unplug and reconnect the board to release the stale serial handle.

## Installing WLED

For ordinary use, prefer the official web installer:

<https://install.wled.me/>

Select the stable **ESP32-S2**, **Plain**, **4 MB**, **Standard memory** build. A custom source build is unnecessary because the LED pin and count are configurable in WLED.

The working release was WLED 16.0.1:

<https://github.com/wled/WLED/releases/tag/v16.0.1>

Use `WLED_16.0.1_ESP32-S2.bin`. Verify its SHA-256 checksum against the checksum published with the release before flashing.

### Important first-install detail

The WLED release binary is only the application. A clean ESP32-S2 installation also needs the correct bootloader and partition table. For a 4 MB S2, the official installer layout is:

| Offset | Image |
|---:|---|
| `0x1000` | ESP32-S2 bootloader |
| `0x8000` | ESP32-S2 4 MB partition table |
| `0x10000` | `WLED_16.0.1_ESP32-S2.bin` |

Use the bootloader and partition table from the official WLED Web Installer repository:

- `bin/boot/bootloaders/esp32-s2/bootloader_s2.bin`
- `bin/boot/partitions/partitions_s2_4m.bin`

Repository: <https://github.com/wled/WLED-WebInstaller>

Once the board is manually in ROM download mode, the successful command-line pattern is:

```powershell
esptool.py --chip esp32s2 --port COMx --baud 460800 `
  --before no_reset --after hard_reset write_flash --erase-all `
  --flash_size 4MB `
  0x1000 bootloader_s2.bin `
  0x8000 partitions_s2_4m.bin `
  0x10000 WLED_16.0.1_ESP32-S2.bin
```

Use the COM port currently assigned to the ROM bootloader. Check the detected chip before allowing the erase. A successful flash reports a verified hash for all three images.

## First WLED configuration

After installation, the pixel may show WLED's default yellow/orange colour. That confirms WLED is running and controlling the pixel.

1. Connect to Wi-Fi network `WLED-AP`.
2. Use password `wled1234`.
3. Open <http://4.3.2.1>.
4. Configure the home Wi-Fi.
5. Open **Config -> LED Preferences**.
6. Set LED type to `WS281x`.
7. Set data GPIO to `16`.
8. Set LED count to `1`.
9. Use colour order `GRB` if colour testing shows swapped channels.

If the pixel does not behave as expected after setup, first recheck VBUS, ground, GPIO16, and the connection to `DIN`.
