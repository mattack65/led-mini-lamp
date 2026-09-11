# Bill of materials

## Electronics and consumables

Estimated costs are approximate and exclude shipping. AliExpress prices and
availability vary by destination and over time.

| Part | Quantity | Specification | Estimated cost | Notes / source |
| --- | ---: | --- | ---: | --- |
| ESP32 development board | 1 | Small, flat ESP32 board with USB port | ~€2.60 | Tested: LOLIN S2 Mini. ESP32-C3 Super Mini is planned for future builds. The board must fit inside the lamp base; boards larger than the S2 Mini may not fit. Use a board without pre-soldered pin headers or other protruding hardware. The USB port must remain accessible because it provides power and is used for setup. [Example ESP32-C3 SuperMini listing](https://www.aliexpress.com/item/1005011660038502.html) |
| Addressable LED strip | 1 | 35 LEDs; 60 LEDs/m; WS2812B ECO; IP30 | ≤ CHF 2.00 | Tested: BTF-LIGHTING WS2812B ECO. The 60 LEDs/m spacing is required. 35 LEDs use about 60 cm of strip. ECO LEDs keep the full-white load suitable for ordinary USB power. [Find the exact specification on AliExpress](https://www.aliexpress.com/w/wholesale-ws2812b-eco-60-leds-m-ip30.html?SearchText=WS2812B%20ECO%2060%20LEDs%2Fm%20IP30) |
| Hook-up wire | 3 lengths | AWG22; about 7 cm each | ~€0.10 | Enough for the maximum LED current of 1.12 A. One wire each for 5 V, GND, and data. |
| Double-sided tape | About 2 cm | Suitable for electronics | ~€0.05 | Holds the ESP32 to the base. |
| Glue | A few drops | Suitable for the printed parts | ~€0.05 | Glues the clip unit into the top plug. |

## Power requirement

A USB cable and power adapter are required but intentionally not included in
the BOM: most builders already have a suitable set.

| Part | Quantity | Requirement | Estimated cost |
| --- | ---: | --- | ---: |
| USB cable and power adapter | 1 | 5 V; at least 1.5 A. Connects to the ESP32 USB port and powers the lamp. | Not included |

## Tools

| Tool | Quantity | Estimated cost | Notes |
| --- | ---: | ---: | --- |
| Soldering iron | 1 | Not included | Suitable for electronics soldering. |
| Solder | As needed | ~€0.05 | The LED strip connects to the ESP32 with six solder joints. |
