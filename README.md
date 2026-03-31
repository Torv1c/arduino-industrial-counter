# Industrial Object Counter (Arduino + IR Sensor + LED Matrix)

## Project Overview
This repository contains the firmware and architectural documentation for an automated industrial object counter, developed during the 2nd semester of my Electronic Engineering degree. 

The project aims to provide a low-cost, highly reliable alternative to commercial industrial counters. It uses an infrared sensor to detect passing objects on a conveyor belt and displays the real-time count across a cascaded 8x32 LED Matrix display.

## Tech Stack & Hardware
* **Microcontroller:** Arduino Uno (ATmega328P)
* **Language:** C / C++
* **Sensor:** LM393 Infrared (IR) Obstacle Avoidance Sensor
* **Display:** 2x MAX7219 8x32 LED Dot Matrix Modules
* **Libraries:** `MD_Parola`, `MD_MAX72xx`, `SPI`

## Key Engineering Highlights

### 1. Robust State Machine (Anti-Debounce Logic)
One of the main physical challenges in industrial counting is preventing a single large object (like a long box or a bottle) from triggering multiple counts as it slides past the sensor. 

To solve this, I implemented a custom state machine. Instead of incrementing the counter immediately upon IR detection (`digitalRead(6) == 1`), the system locks into an `espEnt` (waiting) state. The counter only increments **after** the object has completely left the sensor's line of sight. This ensures 100% accuracy regardless of object length or conveyor speed.

### 2. Custom Display Zoning (Hardware Limitations & Workarounds)
To display large, readable digits across two cascaded 8x32 LED matrices, the display was virtually split into an upper zone (`BigFontUp`) and a lower zone (`BigFontBottom`). 

**The Memory Constraint (The "55" Limit):** Due to specific hardware quirks with generic MAX7219 modules and the `MD_Parola` library at the time, dynamic string formatting (like `sprintf`) failed to render correctly across the dual-zone setup. To deliver a functional prototype, a "brute force" rendering approach was utilized using a `switch-case` structure for each number. 

Because the Arduino Uno (ATmega328P) has limited flash memory (32 KB), writing individual cases maxed out the memory capacity precisely at the number **55**. The system includes an `ERROR / >:(` handling state if the physical count exceeds the microcontroller's memory limit. 

This project stands as a practical study in embedded systems trade-offs: choosing functional delivery and hardcoded workarounds when faced with third-party library limitations and hard silicon constraints.

---
**Author:** Victor Cesar de Mecê Prando
**LinkedIn:** [victor-prando1](https://www.linkedin.com/in/victor-prando1/)
