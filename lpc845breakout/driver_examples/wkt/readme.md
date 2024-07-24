Overview
========
The WKT project is a simple demonstration program of the SDK WKT driver. It sets up the WKT hardware 
block to trigger a periodic interrupt after loading a counter value and counting down to 0. 
When the WKT interrupt is triggered a message printed on the UART terminal and the LED is toggled on the board.

Depending on the clock source, the WKT can be used for waking up the part from any low power mode or for general-purpose
timing.

SDK version
===========
- Version: 2.16.000

Toolchain supported
===================
- GCC ARM Embedded  13.2.1
- MCUXpresso  11.10.0

Hardware requirements
=====================
- Micro USB cable
- LPC845 Breakout board
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the demo
1.  Connect a micro USB cable between the PC host and the CMSIS DAP USB port on the board.
2.  Open a serial terminal with the following settings:
    - 9600 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
The log below shows example output of the WKT driver demo in the terminal window:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
WKT interrupt example

 Self-wake-up timer interrupt is occurred !
 Self-wake-up timer interrupt is occurred !
 Self-wake-up timer interrupt is occurred !
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
