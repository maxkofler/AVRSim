# USim
A flexible microcontroller simulator

The goal of this project is to create a flexible microcontroller emulator. This is due to me trying to find a good and usable emulator for the AVR platform. So this is the project to bring my dream to life. 

## How will it work?
This simulator (hopefully) will be built very flexible, means that you can "build" your own controller. You can choose a certain CPU core, attach it to your desired memory type and attach your desired peripherals.

## Roadmap
My first goal is to create the CPU core interface, this is where you can attach your peripherals and memory to the CPU core. The first core to be implemented will probably be the AVRTiny core, because it is tiny (duh) so implementing it should not be too hard. Coming with this goal is the implementation of memory types, they should be able to load their contents from binary files and the CPU core should be able to execute binaries compiled by the real AVR toolchain, so programs can run the same on the simulator and the real hardware.

Finally there should be a nice GUI, but I don't know if I will be able to accomplish that. I really can't do GUIs, so i may need help there.