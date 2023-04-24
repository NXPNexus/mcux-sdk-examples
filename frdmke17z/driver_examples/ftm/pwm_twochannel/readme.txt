Overview
========
The FTM pwm two channel Example project is a demonstration program that uses the KSDK software to generate a square 
pulse PWM(24kHZ) on 2 channel to control the LED brightness. It sets up the FTM hardware block to output two edge-aligned PWM signals.
The PWM dutycycles are periodically updated.
- FTM generates a PWM with the increasing and decreasing duty cycle.
- LED brightness is increasing and then dimming. This is a continuous process.
The user should probe the FTM output with a oscilloscope to see the PWM.

Toolchain supported
===================
- GCC ARM Embedded  10.3.1
- MCUXpresso  11.6.0

Hardware requirements
=====================
- Micro USB cable
- FRDM-KE17Z board
- An oscilloscope
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board.
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

~~~~~~~~~~~~~~~~~~~~~~~
FTM example to output PWM on 2 channels

You will see a change in LED brightness if an LED is connected to the FTM pin

If no LED is connected to the FTM pin, then probe the signal using an oscilloscope
~~~~~~~~~~~~~~~~~~~~~~~
