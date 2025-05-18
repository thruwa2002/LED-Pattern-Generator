# LED Blinking on PD0 – ATmega328 Project

This project is a simple example of blinking an LED connected to pin PD0 of the ATmega328 microcontroller. The LED turns ON and OFF every 500 milliseconds, creating a blinking effect.

## 🔧 Hardware Requirements
- ATmega328 microcontroller
- 1 LED
- 100Ω resistor
- Breadboard and jumper wires
- 5V power supply

## 🔌 Circuit Connection
- Connect the anode (+) of the LED to **PD0** (pin 2 of ATmega328).
- Connect a 100Ω resistor from the cathode (–) of the LED to **GND**.

## 🧠 How It Works
- PD0 is configured as an output pin.
- The program sets PD0 HIGH (LED ON), waits 500ms, sets it LOW (LED OFF), and waits another 500ms.
- This creates a continuous blink.

## 💻 Tools Used
- Atmel Studio (for code writing and compilation)
- SimulIDE (for simulation, optional)
- AVR-GCC toolchain

## 📄 Code Snippet
```c
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRD |= (1 << PD0);  // Set PD0 as output

    while (1) {
        PORTD |= (1 << PD0);  // Turn ON PD0
        _delay_ms(500);
        PORTD &= ~(1 << PD0); // Turn OFF PD0
        _delay_ms(500);
    }
}
