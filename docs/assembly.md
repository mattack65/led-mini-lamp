# Assembly

This guide uses a LOLIN S2 Mini and a 35-LED WS2812B ECO strip. First install [WLED](install-wled.md) on the ESP32. The assembly photos use red for 5 V, black for GND, and purple for data.

## 1. Prepare the parts

The printed parts are three core structures, a base, a top plug, a clip unit, and one diffusor. You will also need the controller, the LED strip, three short wires, double-sided tape, glue, and soldering equipment.

<img src="../photos/IMG_4163.JPG" alt="Three printed core structures on the print plate." width="50%">

Print three identical core structures.

<img src="../photos/IMG_4164.JPG" alt="The printed base, viewed from above." width="50%">

The base holds the controller and leaves the USB port accessible at its edge.

<img src="../photos/IMG_4166_1.JPG" alt="The printed clip unit." width="50%">

The clip unit will later be glued into the top plug.

<img src="../photos/IMG_4166.JPG" alt="The printed top plug." width="50%">

The top plug closes the centre opening once the lamp is complete.

<img src="../photos/IMG_4243.jpg" alt="A finished white PLA diffusor." width="50%">

Choose one white-PLA diffusor for this lamp.

<img src="../photos/IMG_4245.jpg" alt="All printed parts arranged before assembly." width="50%">

Lay out the parts before starting; the three core structures form the black internal frame.

<img src="../photos/IMG_4246.jpg" alt="BTF-LIGHTING WS2812B ECO LED strip packaging." width="50%">

Use a 60 LEDs/m WS2812B ECO strip, as listed in the [BOM](bom.md).

<img src="../photos/IMG_4248_1.PNG" alt="A 35-LED length marked on the LED strip." width="50%">

Some LED strips have factory-soldered joins between sections. The red lines mark the folds required when fitting the strip, counted from the D in end. Before cutting a 35-LED section, check that no factory-soldered join will land on a fold. If it would, cut one or two LEDs from the start of the roll first, then choose the next 35-LED section.

<img src="../photos/IMG_4248.JPG" alt="Close-up of the LED strip." width="50%">

This factory-soldered join is fine on a straight section of the strip, but it must not fall on one of the marked folding positions.

<img src="../photos/IMG_4251.JPG" alt="LOLIN S2 Mini and three prepared wires." width="50%">

Prepare three wires about 7 cm long: one each for 5 V, GND, and data.

## 2. Prepare the core and top clip

<img src="../photos/IMG_4253.JPG" alt="The core structures assembled into the lamp frame." width="50%">

Join the three core structures to make the internal frame. Their circular rings create the path for the LED strip.

<img src="../photos/IMG_4255.JPG" alt="Side view of the joined core structures." width="50%">

Check that the core sections sit fully together and that their rings form a smooth continuous spiral.

<img src="../photos/IMG_4256.JPG" alt="Top view of the core structure." width="50%">

The upper locating arms should remain free; they will engage with the top assembly later.

<img src="../photos/IMG_4257.JPG" alt="The clip unit and a few drops of glue." width="50%">

Use only a few drops of glue for the clip unit.

<img src="../photos/IMG_4258.JPG" alt="The clip unit fitted into the top assembly." width="50%">

Seat the clip unit squarely so that its two flexible arms point upward.

<img src="../photos/IMG_4260.JPG" alt="LED strip pads at the data-input end." width="50%">

The three pads are labelled +5V, D in, and GND. These are the pads to connect to the controller.

<img src="../photos/IMG_4261.JPG" alt="Three wires with their ends stripped." width="50%">

Strip only a few millimetres of insulation from each wire.

## 3. Solder the ESP32

The photos below show the pads on the LOLIN S2 Mini used in this build. On a different board, connect the same three signals: 5 V, GND, and the configured data GPIO.

| Function | LOLIN S2 Mini pad | LED strip pad | Wire shown |
| --- | --- | --- | --- |
| Power | VBUS | +5V | Red |
| Ground | GND | GND | Black |
| Data | 16/17 (GPIO 16) | D in | Purple |

<img src="../photos/IMG_4262.jpg" alt="LOLIN S2 Mini pads selected for the three connections." width="50%">

The highlighted pads are, from top to bottom, GPIO 16, GND, and VBUS.

<img src="../photos/IMG_4267.jpg" alt="Tinning the first wire end." width="50%">

Tin the exposed wire ends before joining them to the board.

<img src="../photos/IMG_4269.jpg" alt="A wire held ready for soldering." width="50%">

A helping hand or similar holder makes these small solder joints much easier.

<img src="../photos/IMG_4270.JPG" alt="Soldering-iron temperature set for the joint." width="50%">

Use a clean, adequately heated iron so the joint is quick and tidy.

<img src="../photos/IMG_4272.jpg" alt="Soldering the 5 V wire to the ESP32." width="50%">

Solder the red 5 V wire to VBUS.

<img src="../photos/IMG_4275.jpg" alt="Soldering the ground wire to the ESP32." width="50%">

Solder the black wire to GND.

<img src="../photos/IMG_4279.jpg" alt="Soldering the data wire to the ESP32." width="50%">

Solder the purple data wire to GPIO 16.

<img src="../photos/IMG_4281.jpg" alt="ESP32 with all three wires connected." width="50%">

The controller wiring is complete: red to VBUS, black to GND, and purple to GPIO 16.

<img src="../photos/IMG_4281_1.JPG" alt="Cutting the three wires to equal length." width="50%">

Cut the free ends to the same length and arrange them in the correct order: red, black, purple.

## 4. Solder the LED strip

Solder the other ends of the same three wires to the +5V, D in, and GND pads at the **input** end of the LED strip. The three controller joints and the three strip joints are the six solder joints required for the lamp.

<img src="../photos/IMG_4283.jpg" alt="Preparing the wires for the LED-strip connection." width="50%">

Arrange the wires so that they will reach the strip without crossing each other unnecessarily.

<img src="../photos/IMG_4290.jpg" alt="The three wire ends tinned and ready." width="50%">

A small amount of solder on each end is enough.

<img src="../photos/IMG_4291.jpg" alt="LED-strip input pads highlighted." width="50%">

Use the pads at the end marked D in; the arrows point away from this input end.

<img src="../photos/IMG_4292.jpg" alt="Tinning an LED-strip pad." width="50%">

Tin the copper pad briefly, without overheating the flexible strip.

<img src="../photos/IMG_4298.jpg" alt="Tinned LED-strip input pads." width="50%">

The three pads are ready to receive the wires.

<img src="../photos/IMG_4302.jpg" alt="Soldering a wire to the LED strip." width="50%">

Hold the wire still until the solder joint has set.

<img src="../photos/IMG_4307.jpg" alt="Completing the LED-strip solder joints." width="50%">

Repeat for the remaining two pads: red to +5V, purple to D in, and black to GND.

<img src="../photos/IMG_4309.jpg" alt="Completed LED-strip wiring." width="50%">

Check that the wires are firmly attached.

<img src="../photos/IMG_4310.jpg" alt="The controller connected to the LED strip." width="50%">

The electrical assembly is now complete. Connect USB power briefly to confirm that the strip responds in WLED. With fresh WLED settings, the final five LEDs will probably stay off because the default is 30 LEDs. After configuring this lamp in WLED, the first and final two LEDs stay off as intended.

## 5. Attach the LED strip to the core

Start at the wired input end and follow the spiral path formed by the core rings. The physical strip contains 35 LEDs: the first and final two are used for attachment, while WLED controls the 32 LEDs between them.

<img src="../photos/IMG_4311_1.JPG" alt="Peeling the backing from the LED strip." width="50%">

Cut through the backing paper at the planned folding points, but leave the backing on the strip. Only the short sections at the beginning and end will be peeled away later.

<img src="../photos/IMG_4311_2.JPG" alt="Starting the LED strip on the core." width="50%">

Place the wired input end at the lower part of the core, with the wires leading down towards the base.

<img src="../photos/IMG_4311_3.JPG" alt="Pressing the first section of strip into position." width="50%">

Press the strip gently onto the core ring; do not sharply bend the flexible PCB.

<img src="../photos/IMG_4312.jpg" alt="Guiding the strip around the first ring." width="50%">

Follow the ring and keep the LEDs facing outwards.

<img src="../photos/IMG_4314.JPG" alt="Continuing the strip along the spiral." width="50%">

Advance one short section at a time, keeping the strip centred on its support.

<img src="../photos/IMG_4316.JPG" alt="Pressing the strip to the next core level." width="50%">

The core provides the correct spacing between each turn of the strip.

<img src="../photos/IMG_4317.JPG" alt="The strip passing from one level of the core to the next." width="50%">

Guide the strip smoothly between levels; avoid twisting it.

<img src="../photos/IMG_4322.JPG" alt="Attaching the next section of LED strip." width="50%">

Continue following the spiral path around the structure.

<img src="../photos/IMG_4323.JPG" alt="The LED strip seated on the core." width="50%">

The adhesive should hold the strip flat against the printed support.

<img src="../photos/IMG_4324.JPG" alt="Pressing the strip into its final position on this level." width="50%">

Check that each LED is unobstructed and faces outward.

<img src="../photos/IMG_4325.JPG" alt="Continuing around the upper core ring." width="50%">

Work around the core until the strip reaches the final turn.

<img src="../photos/IMG_4327.JPG" alt="The strip aligned at the next transition." width="50%">

Keep the strip aligned with the ring rather than pulling it taut.

<img src="../photos/IMG_4328.JPG" alt="Pressing the strip into place on the final turns." width="50%">

Use the adhesive backing to secure the strip as you go.

<img src="../photos/IMG_4329.JPG" alt="The nearly complete spiral of LEDs." width="50%">

The strip should now run evenly around all three core structures.

<img src="../photos/IMG_4330.JPG" alt="Securing the last section of the strip." width="50%">

Place the final LEDs on the remaining supports.

<img src="../photos/IMG_4331.JPG" alt="Completed LED-strip spiral." width="50%">

The last two LEDs are retained as attachment points and are not part of the 32 LEDs controlled by WLED.

<img src="../photos/IMG_4332.jpg" alt="Removing the remaining adhesive backing." width="50%">

Peel the backing carefully so the strip stays aligned.

<img src="../photos/IMG_4333_1.JPG" alt="The LED strip viewed inside the finished core." width="50%">

Inspect the complete spiral from above before moving on.

<img src="../photos/IMG_4333.JPG" alt="Underside view of the LED strip on the core." width="50%">

The strip should be securely attached all the way around the structure.

<img src="../photos/IMG_4334.jpg" alt="The completed core and LED strip." width="50%">

Check that the wire connection remains free to reach the controller in the base.

## 6. Test the LEDs and fit the controller into the base

<img src="../photos/IMG_4335.jpg" alt="LED strip powered for the first test." width="50%">

Connect USB power and confirm that the LEDs illuminate before closing the lamp.

<img src="../photos/IMG_4336.JPG" alt="The LED spiral lit during the test." width="50%">

A successful test is much easier to fix now than after the lamp is closed.

<img src="../photos/IMG_4337.jpg" alt="Applying double-sided tape to the ESP32." width="50%">

Apply about 2 cm² of double-sided tape to the back of the controller.

<img src="../photos/IMG_4338.jpg" alt="ESP32 positioned in the base." width="50%">

Fix the controller inside the base with its USB port facing the opening in the edge.

<img src="../photos/IMG_4341.JPG" alt="Core structure positioned above the base." width="50%">

Lower the wired core assembly toward the base, keeping the controller wires inside.

<img src="../photos/IMG_4342_1.JPG" alt="Detail of the LED strip and controller inside the base." width="50%">

Make sure neither the strip nor the wires are pinched as the core enters the base.

<img src="../photos/IMG_4342.JPG" alt="Core structure seated in the base." width="50%">

The core sits inside the rim of the base, and the USB connector remains accessible.

## 7. Fit the diffusor and finish the lamp

<img src="../photos/IMG_4343.jpg" alt="Lowering the diffusor over the core." width="50%">

Lower your chosen diffusor evenly over the LED structure.

<img src="../photos/IMG_4344.jpg" alt="Seating the diffusor on the base." width="50%">

Press gently until the diffusor sits flat on the base.

<img src="../photos/IMG_4345.jpg" alt="Diffusor fitted over the lamp frame." width="50%">

The central opening remains accessible for the top plug.

<img src="../photos/IMG_4346.jpg" alt="Placing the top plug." width="50%">

Set the top plug into the central opening.

<img src="../photos/IMG_4347.jpg" alt="Top plug fitted." width="50%">

Press the top plug home so it sits flush and retains the assembly.

<img src="../photos/IMG_4349.jpg" alt="Finished lamp illuminated." width="50%">

Connect a 5 V USB supply rated for at least 1.5 A and choose a colour or effect in WLED.

<img src="../photos/IMG_4350.jpg" alt="Completed LED mini lamp." width="50%">

The lamp is ready to use. See [Using your lamp](using-your-lamp.md) for presets, effects, and schedules.
