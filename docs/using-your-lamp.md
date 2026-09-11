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

## On and off presets

Presets can also run a command rather than save a lighting look. In the
**Presets** tab, choose **Create Preset**, turn off **Use current state**, and
enter one of these API commands:

| Command | Result |
| ------- | ------ |
| `T=1` | Turn the lamp on, restoring the last-used look. |
| `T=0` | Turn the lamp off. |
| `T=2` | Toggle the lamp on or off. |

Save these with clear names such as `Lamp on` and `Lamp off`. They can be
selected manually, used in playlists, or triggered by a schedule.

## Turn on at sunset

1. Create and save the preset you want the lamp to use at sunset. To simply
   restore the last-used look, create a `T=1` on preset instead. Also create a
   `T=0` off preset for the time you want the lamp to switch off.
2. Open **Config → Time & Macros**.
3. Set the correct time zone and enable time synchronisation (NTP).
4. Set your location so WLED can calculate local sunrise and sunset. When
   using a browser, the **Get Location** button can fill this in.
5. Under **Time-Controlled Presets**, add a **Sunset** timer, select your
   preset, choose the days of the week, and save.

Use the minutes field to make the lamp switch on before or after sunset. Add a
second timer for sunrise, sunset, or a regular time and select the `T=0` off
preset to switch it off automatically.

## Other useful WLED features

- **Nightlight:** have the lamp fade itself off after a chosen duration.
- **Boot preset:** choose a preset that is applied automatically whenever the
  lamp receives power.
- **Playlists:** create a slow, changing ambience from several presets.
- **Home Assistant:** WLED has native Home Assistant discovery, so the lamp
  can be added to an existing smart-home setup.

WLED has many more options; its [official documentation](https://kno.wled.ge/)
is an excellent place to explore once the lamp is working.
