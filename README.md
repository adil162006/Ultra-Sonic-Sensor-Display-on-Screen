# Ultrasonic Distance Display on LCD

This Arduino project uses an **HC-SR04 ultrasonic sensor** to measure distance and displays the result on a **16x2 LCD screen**. The project is ideal for learning how to use sensors and LCDs with Arduino.

---

## 📦 Components Required

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD (with HD44780 controller)
- 10kΩ Potentiometer (for LCD contrast) *(or 220Ω resistor to GND for fixed contrast)*
- Jumper wires
- Breadboard (optional in Tinkercad or physical setup)

---

## 🔌 Wiring Guide

### 🔹 LCD Wiring (16x2)

| LCD Pin | Connects To       | Description                  |
|---------|-------------------|------------------------------|
| 1 (GND) | Arduino GND       | Ground                       |
| 2 (VCC) | Arduino 5V        | Power supply                 |
| 3 (V0)  | Potentiometer mid | Contrast control             |
| 4 (RS)  | Pin 12            | Register Select              |
| 5 (RW)  | GND               | Write mode                   |
| 6 (EN)  | Pin 11            | Enable pin                   |
| 11 (D4) | Pin 5             | Data                         |
| 12 (D5) | Pin 4             | Data                         |
| 13 (D6) | Pin 3             | Data                         |
| 14 (D7) | Pin 2             | Data                         |
| 15 (A)  | 5V (via resistor) | LCD backlight (Anode)        |
| 16 (K)  | GND               | LCD backlight (Cathode)      |

### 🔹 Ultrasonic Sensor (HC-SR04)

| Sensor Pin | Connects To |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| TRIG       | Pin 9       |
| ECHO       | Pin 8       |

---

## 🧠 How It Works

1. The ultrasonic sensor emits a short sound pulse.
2. It waits for the echo to return and measures the duration.
3. Distance is calculated using the formula:

   \[
   \text{Distance (cm)} = \frac{\text{duration} \times 0.034}{2}
   \]

4. The result is displayed on the second line of the LCD.

---

