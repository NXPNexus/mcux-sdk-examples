Overview
========
The example shows how to use FileX and LevelX with SPI flash.

This example will erase the SPI flash and format it in FAT format.
Then, do some file operation test - create, write, read, close and so on.


Toolchain supported
===================
- GCC ARM Embedded  10.3.1
- MCUXpresso  11.7.0

Hardware requirements
=====================
- Micro USB cable
- Target Board
- Personal Computer
- One Flash 3 Click (a mikroBUS add-on board)

Board settings
==============
Install the Flash 3 Click board on the mikroBUS socket.

Prepare the Demo
================
1.  Connect a USB Micro cable between the host PC and the Debug Link USB port (P6) on the target board.
2.  Open a serial terminal on PC with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Compile the demo.
4.  Download the program to the target board.
5.  Press the on-board RESET button to start the demo.

Running the demo
================
When the example runs successfully, the console will output like:

Start FileX LevelX SPI Flash example
Erase Flash: offset = 0x0, size = 512 KB
................................................................................................................................
Fromat: disk_size = 480 KB

Creat TEST.TXT
Open TEST.TXT
Write TEST.TXT
Read TEST.TXT
Close TEST.TXT

Continue the test (y/n):

