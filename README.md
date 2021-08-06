# Blinking LED

This is a small arduino program that blink an LED at a specified frequency. We used these program to evaluate an event camera's ability to measure this frequency.

Two different techniques can be used to blink the LED. The first uses a loop and a high resolution clock to determine when to turn on or off the LED to make it blink at a given rate. This is done in the **blink_pattern()** function.

The other approach is to use the built-in **tone()** function, which generates a signal on a specified pin. The frequency of the tone corresponds to how often the LED is turned on and off.

## Parts
We used the [Arduino Nano 33 Sense BLE](https://store.arduino.cc/usa/nano-33-ble-sense-with-headers) board for this test. This was mounted on a breadboard and an LED and resistor were attached.

