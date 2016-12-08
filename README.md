# Temperature Regulator [ v1.0 ]



My goal for this project is to build an arduino-controlled temperature regulator. A temperature regulator is a device that measures temperature change of a space, and achieves a desired average temperature by adjusting passage of heat energy into or out of the space. This type of technology is used in common household devices such as ovens, water heaters, and refrigerators, but they also have scientific and industrial applications. They are used to keep the temperature stable in a situation where something is to be heated, cooled, or both and to remain at the target temperature despite the constant temeprature change in the environment.

Why are temperature regulators needed and what do they do? 

They are required to keep the temperature stable in a situation where something is to be heated, cooled, or both and to remain at the target temperature despite the constant temperature change in the environment. There are two types to this regulation; 1) Open loop - is the application of constant heating or cooling without regard for actual temperature output and 2) Closed loop - is a bit more complicated this is when output temperature is continuously measured and adjusted to maintain a constant output of the desired temperature.

How does it work?

Regulators control some variable at a set value, and require at least two variables one being the actual input signal and the other is the desired set-point value. The actual input signal is compared with the set-point value to check if they match. If not then the controller results in generating an output signal change based on the difference between the input signal and the set point value while also examining whether the input signal converges towards the set-point value or diverges from it. This causes a response by the output signal to correct the input signal so that it matches the set-point value.

![alt text] [pic1]


# Repository Contents

* /src
* /hardware
* /build
* /img
* /LICENSE
* /README.md

# Requirements and Materials

Libraries required:

* LiquidCrystal.h

Bill of Materials (note: will be subject to change) :

* 1 x Arduino
* 1 x Breadboard
* 1 x Temperature Sensor (TMP36)
* 1 x LCD display
* 1 x Plastic Box 
* 1 x Aluminium foil
* 1 x Heating element/ Incandescent bulb/ Thermoelectric cooler/ DC Fan
* 1 x Heat Sink
* 4 x Push buttons
* 1 x Potentiometer
* 1 x 9v Battery

# Build Instructions

![alt text] [pic2]
[pic2]: https://github.com/AJama50/CS207-Project/blob/master/img/circuitSchematic2.png "Temp. Regulator Schematic 1"


An Arduino-controlled temperature regulator is very easy to use, and also easy to set up. First download and upload the code to the Arduino. The second step is to follow the circuit schematic, and LCD pin connection table on how to wire the circuit.The temperature sensor has 3 pins the ones on the left and right are connected to 5V and  ground while the middle pin is connected to analog pin 0. The transistor that acts as an electronic switch to the DC fan also has 3 pins the collector is connected to the DC fan while the base is connected to a 10k resistor which is connected to pin 10, and the emitter is connected to ground. A flyback diode that is connected to the DC fan is used to protect the Arduino from the DC fan when power is turned off because the DC fan can act as a generator. 

The Arduino can only provide 5V to the DC fan which is not nearly enough to power a 12V DC fan, so use a 9V battery as an extra power supply for the DC fan. The LCD shield has many pin connections, so it is best to use the LCD pin connection to make sure it is connected properly. The pins 1, 5, and 16 frOm the LCD are connected to ground while pins 2 and 15 are connected to 5V while the pins 4, 6, 11, 12, 13, 14 from the LCD are connected to pins 2, 3, 4, 5, 11, 12 on the Arduino. The pin 3 from the LCD is connected to a potentiometer on the breadboard that controls the contrast of the LCD. 

# Usage

This temperature regulator will be able to change the internal temperature of the plastic box by reading in, through the temperature sensor, the external temperature of the surrounding environment. The set temperature, current temperature, and whether the heater is on or off will be displayed using an LCD display. Pushbuttons will be used to turn on/off the heater, and also to adjust(up/down) the desired temperature. I might also use a potentiometer to adjust the temperature.

# Team

* Abdullah Jama

# Credits

* Adafruit - https://learn.adafruit.com/tmp36-temperature-sensor
* Arduino - https://www.arduino.cc
