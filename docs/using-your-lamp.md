# Using your lamp

Control the lamp with the [WLED app](wled-setup.md#app-and-first-connection)
or by opening its WLED address in a browser.

## Colours and effects

Open the **Colors** tab to choose colours and palettes. Open the **Effects**
tab to browse animations, then adjust brightness, speed, and intensity until
you find a look you like.

## Save presets

Presets save a complete look: colours, effect, brightness, and other current
settings. They are useful for switching between favourite moods with one tap.

1. Set the lamp exactly as you like it.
2. Open the **Presets** tab and choose **Create Preset**.
3. Give it a meaningful name, such as `Warm evening` or `Party`.
4. Save the current state.

Select a saved preset at any time to restore it. You can also create a
playlist to cycle through multiple presets automatically.

## Turn on at sunset

1. Create and save the preset you want the lamp to use at sunset.
2. Open **Config → Time & Macros**.
3. Set the correct time zone and enable time synchronisation (NTP).
4. Set your location so WLED can calculate local sunrise and sunset. When
   using a browser, the **Get Location** button can fill this in.
5. Under **Time-Controlled Presets**, add a **Sunset** timer, select your
   preset, choose the days of the week, and save.

Use the minutes field to make the lamp switch on before or after sunset. Add a
second timer with an off preset if you also want it to turn itself off later.

## Other useful WLED features

- **Nightlight:** have the lamp fade itself off after a chosen duration.
- **Boot preset:** choose a preset that is applied automatically whenever the
  lamp receives power.
- **Playlists:** create a slow, changing ambience from several presets.
- **Home Assistant:** WLED has native Home Assistant discovery, so the lamp
  can be added to an existing smart-home setup.

WLED has many more options; its [official documentation](https://kno.wled.ge/)
is an excellent place to explore once the lamp is working.
