# garfpad

![garfpad](/Documentation/Garfpad.jpg)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Garrett Lilley](https://github.com/yogrrt)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make garfpad:default

Flashing example for this keyboard:

    make garfpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader by:

* **Microcontroller Reset**: Briefly press the button on the microcontroller
* **Physical reset button**: Briefly press the button on the top left of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
