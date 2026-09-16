# Installing WLED firmware

This page installs WLED on the ESP32. Once WLED is running, continue with the
[lamp-specific WLED setup](wled-setup.md).

## Recommended method: WLED web installer

1. Connect the ESP32 to a computer with a USB **data** cable.
2. Use a current desktop version of Chrome, Edge, Opera, or Firefox.
3. Open the [WLED web installer](https://install.wled.me/).
4. Follow the installer prompts and select the connected ESP32.
5. Choose the WLED firmware appropriate for your ESP32 board and complete the
   installation.

After the ESP32 restarts, it creates the temporary Wi-Fi network `WLED-AP`.
Continue with [WLED setup](wled-setup.md).

## Other installation methods

The browser installer does not suit every ESP32 board or computer. If it does
not work for your setup, use the method recommended for your board and the
[official WLED installation guide](https://kno.wled.ge/basics/install-binary/),
or consult your preferred AI.
