Overview
========
The lpuart_edma Ring Buffer Example project is to demonstrate usage of the KSDK lpuart driver.
In the example, a ring buffer will be used with EDMA enabled, data received will be stored in ring 
buffer first, while IDLE line was detected, routine will read out the received characters, and echo back
them to the terminal by using EDMA mode. so, you can see the your pressed characters on the terminal.

SDK version
===========
- Version: 2.14.1

Toolchain supported
===================
- GCC ARM Embedded  12.2
- MCUXpresso  11.8.0

Hardware requirements
=====================
- Micro USB cable
- FRDM-KE17Z512 board
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect a USB cable between the host PC and the MCU-LINK USB port on the target board.
2.  Open a serial terminal with the following settings:
   - 115200 baud rate
   - 8 data bits
   - No parity
   - One stop bit
   - No flow control
3. Download the program to the target board.
4. Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
When the example runs successfully, the following message is displayed in the terminal:

~~~~~~~~~~~~~~~~~~~~~
LPUART EDMA ring buffer example.
Board will send back received characters:

~~~~~~~~~~~~~~~~~~~~~
