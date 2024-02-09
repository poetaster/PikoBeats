# PikoBeats
A Drum sequencer for the Pikocore, revisted. Derived from https://github.com/rheslip/PikoBeats (thanks!)

Alternate firmware for the Pikocore designed by Zack Scholl https://infinitedigits.co/wares/pikocore/
Please visit Zack's site to buy a Pikocore, a kit, or a PCB - its a really fun little sample glitcher.

This firmware is based on https://github.com/rheslip/PikoBeats and the Euclidean one chip module from bastl instruments https://github.com/bastl-instruments/one-chip-modules/blob/master/EUCLID/EUCLID.ino

The beatbox kit is composed of samples from:

* giddster ( https://freesound.org/people/giddster/ )
* AlienXXX ( https://freesound.org/people/AlienXXX/

Controls:

To select a track - press and hold one of the 8 main buttons

While holding a track button, use the left pot to change the sample 

While holding a track button, use the 2nd from left left pot to change the the number of fills in the pattern. Up to sixteen hits will be calculated for the 16 step sequence.

While holding a track button, use the 3rd from left left pot to set the number of times to repeat the current pattern (up to 64)

The "shift" button (USR button on the Pico processor board) provides some alternate functions for the pots:

While holding the shift button (or buttons 4 and 8 together) use the left pot to set the BPM. BPM readout on the LEDs is the same as on the Pikocore.

While holding the shift button, use the 2nd from left pot to set the pitch for the last track button pressed. Pitch can be adjusted -1 octave to +1 ocatove as you rotate the pot clockwise

While holding the shift button, use the 3rd from left pot to set the volume for the last track button pressed.

Right pot is master volume - same as Pikocore.

Written with Arduino 2.1 with Pico Arduino RP2040 board support package installed. See https://arduino-pico.readthedocs.io/en/latest/

First version Feb. 7, 2024

