# Assembly

This guide uses a LOLIN S2 Mini and a 35-LED WS2812B ECO strip. First install [WLED](install-wled.md) on the ESP32. The assembly photos use red for 5 V, black for GND, and purple for data.

## 1. Prepare the parts

The printed parts are three core structures, a base, a top plug, a clip unit, and one diffusor. You will also need the controller, the LED strip, three short wires, double-sided tape, glue, and soldering equipment.

![Three printed core structures on the print plate.](../photos/IMG_4163.JPG)

*Print three identical core structures.*

![The printed base, viewed from above.](../photos/IMG_4164.JPG)

*The base holds the controller and leaves the USB port accessible at its edge.*

![The printed top plug.](../photos/IMG_4166.JPG)

*The top plug closes the centre opening once the lamp is complete.*

![A finished white PLA diffusor.](../photos/IMG_4243.jpg)

*Choose one white-PLA diffusor for this lamp.*

![All printed parts arranged before assembly.](../photos/IMG_4245.jpg)

*Lay out the parts before starting; the three core structures form the black internal frame.*

![BTF-LIGHTING WS2812B ECO LED strip packaging.](../photos/IMG_4246.jpg)

*Use a 60 LEDs/m WS2812B ECO strip, as listed in the [BOM](bom.md).*

![A 35-LED length marked on the LED strip.](../photos/IMG_4248_1.PNG)

*Cut a section containing exactly 35 LEDs, only at the marked copper cut pads.*

![Close-up of the LED strip.](../photos/IMG_4248.JPG)

*Identify the data-input end of the strip before soldering. The printed arrows show the direction in which data travels away from that end.*

![LOLIN S2 Mini and three prepared wires.](../photos/IMG_4251.JPG)

*Prepare three wires about 7 cm long: one each for 5 V, GND, and data.*

## 2. Prepare the core and top clip

![The core structures assembled into the lamp frame.](../photos/IMG_4253.JPG)

*Join the three core structures to make the internal frame. Their circular rings create the path for the LED strip.*

![Side view of the joined core structures.](../photos/IMG_4255.JPG)

*Check that the core sections sit fully together and that their rings form a smooth continuous spiral.*

![Top view of the core structure.](../photos/IMG_4256.JPG)

*The upper locating arms should remain free; they will engage with the top assembly later.*

![The clip unit and a few drops of glue.](../photos/IMG_4257.JPG)

*Use only a few drops of glue for the clip unit.*

![The clip unit fitted into the top assembly.](../photos/IMG_4258.JPG)

*Seat the clip unit squarely so that its two flexible arms point upward.*

![LED strip pads at the data-input end.](../photos/IMG_4260.JPG)

*The three pads are labelled +5V, DIN, and GND. These are the pads to connect to the controller.*

![Three wires with their ends stripped.](../photos/IMG_4261.JPG)

*Strip only a few millimetres of insulation from each wire.*

## 3. Solder the ESP32

The photos below show the pads on the LOLIN S2 Mini used in this build. On a different board, connect the same three signals: 5 V, GND, and the configured data GPIO.

| Function | LOLIN S2 Mini pad | LED strip pad | Wire shown |
| --- | --- | --- | --- |
| Power | VBUS | +5V | Red |
| Ground | GND | GND | Black |
| Data | 16/17 (GPIO 16) | DIN | Purple |

![LOLIN S2 Mini pads selected for the three connections.](../photos/IMG_4262.jpg)

*The highlighted pads are, from top to bottom, GPIO 16, GND, and VBUS.*

![Tinning the first wire end.](../photos/IMG_4267.jpg)

*Tin the exposed wire ends before joining them to the board.*

![A wire held ready for soldering.](../photos/IMG_4269.jpg)

*A helping hand or similar holder makes these small solder joints much easier.*

![Soldering-iron temperature set for the joint.](../photos/IMG_4270.JPG)

*Use a clean, adequately heated iron so the joint is quick and tidy.*

![Soldering the 5 V wire to the ESP32.](../photos/IMG_4272.jpg)

*Solder the red 5 V wire to VBUS.*

![Soldering the data wire to the ESP32.](../photos/IMG_4275.jpg)

*Solder the purple data wire to GPIO 16.*

![Soldering the ground wire to the ESP32.](../photos/IMG_4279.jpg)

*Solder the black wire to GND.*

![ESP32 with all three wires connected.](../photos/IMG_4281.jpg)

*The controller wiring is complete: red to VBUS, black to GND, and purple to GPIO 16.*

## 4. Solder the LED strip

Solder the other ends of the same three wires to the +5V, DIN, and GND pads at the **input** end of the LED strip. The three controller joints and the three strip joints are the six solder joints required for the lamp.

![Preparing the wires for the LED-strip connection.](../photos/IMG_4283.jpg)

*Arrange the wires so that they will reach the strip without crossing each other unnecessarily.*

![The three wire ends tinned and ready.](../photos/IMG_4290.jpg)

*A small amount of solder on each end is enough.*

![LED-strip input pads highlighted.](../photos/IMG_4291.jpg)

*Use the pads at the end marked DIN; the arrows point away from this input end.*

![Tinning an LED-strip pad.](../photos/IMG_4292.jpg)

*Tin the copper pad briefly, without overheating the flexible strip.*

![Tinned LED-strip input pads.](../photos/IMG_4298.jpg)

*The three pads are ready to receive the wires.*

![The three wires positioned at the LED-strip pads.](../photos/IMG_4301.JPG)

*Match each wire to its labelled pad before applying the iron.*

![Soldering a wire to the LED strip.](../photos/IMG_4302.jpg)

*Hold the wire still until the solder joint has set.*

![Completing the LED-strip solder joints.](../photos/IMG_4307.jpg)

*Repeat for the remaining two pads: red to +5V, purple to DIN, and black to GND.*

![Completed LED-strip wiring.](../photos/IMG_4309.jpg)

*Check that neighbouring pads are not bridged by solder.*

![The controller connected to the LED strip.](../photos/IMG_4310.jpg)

*The electrical assembly is now complete. Before continuing, connect USB power briefly to confirm that the strip responds in WLED.*

## 5. Attach the LED strip to the core

Start at the wired input end and follow the spiral path formed by the core rings. The physical strip contains 35 LEDs: the first and final two are used for attachment, while WLED controls the 32 LEDs between them.

![Peeling the backing from the LED strip.](../photos/IMG_4311_1.JPG)

*Peel only a short length of backing at a time.*

![Starting the LED strip on the core.](../photos/IMG_4311_2.JPG)

*Place the wired input end at the lower part of the core, with the wires leading down towards the base.*

![Pressing the first section of strip into position.](../photos/IMG_4311_3.JPG)

*Press the strip gently onto the core ring; do not sharply bend the flexible PCB.*

![Guiding the strip around the first ring.](../photos/IMG_4312.jpg)

*Follow the ring and keep the LEDs facing outwards.*

![Continuing the strip along the spiral.](../photos/IMG_4314.JPG)

*Advance one short section at a time, keeping the strip centred on its support.*

![Pressing the strip to the next core level.](../photos/IMG_4316.JPG)

*The core provides the correct spacing between each turn of the strip.*

![The strip passing from one level of the core to the next.](../photos/IMG_4317.JPG)

*Guide the strip smoothly between levels; avoid twisting it.*

![Attaching the next section of LED strip.](../photos/IMG_4322.JPG)

*Continue following the spiral path around the structure.*

![The LED strip seated on the core.](../photos/IMG_4323.JPG)

*The adhesive should hold the strip flat against the printed support.*

![Pressing the strip into its final position on this level.](../photos/IMG_4324.JPG)

*Check that each LED is unobstructed and faces outward.*

![Continuing around the upper core ring.](../photos/IMG_4325.JPG)

*Work around the core until the strip reaches the final turn.*

![The strip aligned at the next transition.](../photos/IMG_4327.JPG)

*Keep the strip aligned with the ring rather than pulling it taut.*

![Pressing the strip into place on the final turns.](../photos/IMG_4328.JPG)

*Use the adhesive backing to secure the strip as you go.*

![The nearly complete spiral of LEDs.](../photos/IMG_4329.JPG)

*The strip should now run evenly around all three core structures.*

![Securing the last section of the strip.](../photos/IMG_4330.JPG)

*Place the final LEDs on the remaining supports.*

![Completed LED-strip spiral.](../photos/IMG_4331.JPG)

*The last two LEDs are retained as attachment points and are not part of the 32 LEDs controlled by WLED.*

![Removing the remaining adhesive backing.](../photos/IMG_4332.jpg)

*Peel the backing carefully so the strip stays aligned.*

![The LED strip viewed inside the finished core.](../photos/IMG_4333_1.JPG)

*Inspect the complete spiral from above before moving on.*

![Underside view of the LED strip on the core.](../photos/IMG_4333.JPG)

*The strip should be securely attached all the way around the structure.*

![The completed core and LED strip.](../photos/IMG_4334.jpg)

*Check that the wire connection remains free to reach the controller in the base.*

## 6. Test the LEDs and fit the controller into the base

![LED strip powered for the first test.](../photos/IMG_4335.jpg)

*Connect USB power and confirm that the LEDs illuminate before closing the lamp.*

![The LED spiral lit during the test.](../photos/IMG_4336.JPG)

*A successful test is much easier to fix now than after the lamp is closed.*

![Applying double-sided tape to the ESP32.](../photos/IMG_4337.jpg)

*Apply about 2 cm² of double-sided tape to the back of the controller.*

![ESP32 positioned in the base.](../photos/IMG_4338.jpg)

*Fix the controller inside the base with its USB port facing the opening in the edge.*

![Core structure positioned above the base.](../photos/IMG_4341.JPG)

*Lower the wired core assembly toward the base, keeping the controller wires inside.*

![Detail of the LED strip and controller inside the base.](../photos/IMG_4342_1.JPG)

*Make sure neither the strip nor the wires are pinched as the core enters the base.*

![Core structure seated in the base.](../photos/IMG_4342.JPG)

*The core sits inside the rim of the base, and the USB connector remains accessible.*

## 7. Fit the diffusor and finish the lamp

![Lowering the diffusor over the core.](../photos/IMG_4343.jpg)

*Lower your chosen diffusor evenly over the LED structure.*

![Seating the diffusor on the base.](../photos/IMG_4344.jpg)

*Press gently until the diffusor sits flat on the base.*

![Diffusor fitted over the lamp frame.](../photos/IMG_4345.jpg)

*The central opening remains accessible for the top plug.*

![Placing the top plug.](../photos/IMG_4346.jpg)

*Set the top plug into the central opening.*

![Top plug fitted.](../photos/IMG_4347.jpg)

*Press the top plug home so it sits flush and retains the assembly.*

![Finished lamp illuminated.](../photos/IMG_4349.jpg)

*Connect a 5 V USB supply rated for at least 1.5 A and choose a colour or effect in WLED.*

![Completed LED mini lamp.](../photos/IMG_4350.jpg)

*The lamp is ready to use. See [Using your lamp](using-your-lamp.md) for presets, effects, and schedules.*
