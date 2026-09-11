# Bill of materials

## Electronics and consumables

| Part | Quantity | Specification | Notes |
| --- | ---: | --- | --- |
| ESP32 development board | 1 | Small ESP32 board with USB port | Tested: LOLIN S2 Mini. ESP32-C3 Super Mini is planned for future builds. The board must fit inside the lamp base; boards larger than the S2 Mini may not fit. The USB port must remain accessible because it provides power and is used for setup. |
| Addressable LED strip | 1 | 35 LEDs; 60 LEDs/m; WS2812B ECO; IP30 | Tested: BTF-LIGHTING WS2812B ECO. The 60 LEDs/m spacing is required. ECO LEDs keep the full-white load suitable for ordinary USB power. |
| Hook-up wire | 3 lengths | AWG22; about 7 cm each | Enough for the maximum LED current of 1.12 A. One wire each for 5 V, GND, and data. |
| Double-sided tape | About 2 cm | Suitable for electronics | Holds the ESP32 to the base. |
| Glue | A few drops | Suitable for the printed parts | Glues the clip unit into the top plug. |

## Power requirement

A USB cable and power adapter are required but intentionally not included in
the BOM: most builders already have a suitable set.

| Part | Quantity | Requirement |
| --- | ---: | --- |
| USB cable and power adapter | 1 | 5 V; at least 1.5 A. Connects to the ESP32 USB port and powers the lamp. |

## Tools

| Tool | Quantity | Notes |
| --- | ---: | --- |
| Soldering iron | 1 | Suitable for electronics soldering. |
| Solder | As needed | The LED strip connects to the ESP32 with six solder joints. |
