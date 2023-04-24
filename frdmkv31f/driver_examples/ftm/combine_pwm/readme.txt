Overview
========
The FTM project is a demonstration program of generating a combined PWM signal by the SDK FTM driver. It sets up the FTM
hardware block to output PWM signals(24kHZ) on two TPM channels. The example also shows the complementary mode of operation
and deadtime insertion, updates deadTimePrescale based on counter clock and tries to insert a dead time of about 650 nsec.
This example updates the pwm duty cycle with an interrupt, meanwhile, disables the interrupt to retain the current duty cycle
for a few seconds and disables the output on each channel before updating.
On boards that have 2 LEDs connected to the FTM pins, the user will see a change in LED brightness.
And if the board do not support LEDs to show, the outputs can be observed by oscilloscope.

Toolchain supported
===================
- GCC ARM Embedded  10.3.1
- MCUXpresso  11.6.0

Hardware requirements
=====================
- Mini/micro USB cable
- FRDM-KV31F board
- Personal Computer
- Oscilloscope

Board settings
==============
Connect oscilloscope to J2-2.

Prepare the Demo
================
1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board.
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
When the example runs successfully, the following message is displayed in the terminal:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
FTM example to output combined complementary PWM signals on two channels

You will see a change in LED brightness if an LED is connected to the FTM pin
If no LED is connected to the FTM pin, then probe the signal using an oscilloscope
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
- At this example we use oscilloscope to measure the format of output signals at J3-15
and blue led will change its brightness.
