# Printing the parts

This page is the print plan for the LED Mini Lamp. Each part is supplied as an
STL and, where available, as a 3MF slicer project. Prefer the 3MF when
using a compatible slicer: it opens with the intended orientation and print
recipe. Use the STL if your slicer does not support the 3MF.

This is an early guide. Exact material and printer-setting notes will be added
as the parts are documented.

## What to print

### Diffusers — choose one or more

The diffuser is the visible shade of the lamp. Pick any design below; you can
print more than one to swap the appearance of the lamp later.

| Design | STL | 3MF |
| --- | --- | --- |
| Bulges | [STL](../print-files/stl/lamp_diffusor_bulges.stl) | [3MF](../print-files/3mf/lamp_diffusor_bulges.3mf) |
| Pumpkin | [STL](../print-files/stl/lamp_diffusor_pumpkin.stl) | [3MF](../print-files/3mf/lamp_diffusor_pumpkin.3mf) |
| Seven ripple | [STL](../print-files/stl/lamp_diffusor_seven_ripple.stl) | [3MF](../print-files/3mf/lamp_diffusor_seven_ripple.3mf) |
| Single sinusoidal bulge | [STL](../print-files/stl/lamp_diffusor_single_sinusoidal_bulge.stl) | [3MF](../print-files/3mf/lamp_diffusor_single_sinusoidal_bulge.3mf) |
| Sinusoidal 12 bubbles | [STL](../print-files/stl/lamp_diffusor_sinusoidal_12_bubbles.stl) | [3MF](../print-files/3mf/lamp_diffusor_sinusoidal_12_bubbles.3mf) |
| Sinusoidal 36 wave ×3 | [STL](../print-files/stl/lamp_diffusor_sinusoidal_36_wave_x3.stl) | [3MF](../print-files/3mf/lamp_diffusor_sinusoidal_36_wave_x3.3mf) |
| Starburst | [STL](../print-files/stl/lamp_diffusor_starburst.stl) | — |

### Core structure — print 3

Print **three** copies of the core structure. These are structural parts, so
use the matching 3MF project where possible.

- [STL: `lamp_core_structure.stl`](../print-files/stl/lamp_core_structure.stl)
- [3MF: `lamp_core_structure.3mf`](../print-files/3mf/lamp_core_structure.3mf)

### Standard parts

Print one of each of these standard parts.

| Part | STL | 3MF |
| --- | --- | --- |
| Lamp base | [STL](../print-files/stl/lamp_base.stl) | [3MF](../print-files/3mf/lamp_base.3mf) |
| Top plug | [STL](../print-files/stl/lamp_top_plug.stl) | [3MF](../print-files/3mf/lamp_top_plug.3mf) |

### Clip unit — special print settings

The clip needs its own print recipe; do not assume the settings used for the
standard parts are appropriate. Open the dedicated 3MF project when possible.
Specific material and slicer settings will be recorded here as the recipe is
written up.

- [STL: `lamp_clip_unit.stl`](../print-files/stl/lamp_clip_unit.stl)
- [3MF: `lamp_clip_unit.3mf`](../print-files/3mf/lamp_clip_unit.3mf)

## Before slicing

1. Start with the corresponding 3MF file if your slicer supports it.
2. Check that the part remains in the supplied orientation and that it fits
   within your printer's build volume.
3. Select filament compatible with the part's eventual purpose; material
   recommendations will be added alongside the final print settings.
4. Do not print the clip until its special settings have been confirmed in this
   guide.
