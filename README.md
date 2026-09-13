# 🔐 Smart IoT Motion Security System

A smart security system that detects motion using a PIR motion sensor and provides an immediate alert using an LED and buzzer. The system can be extended with IoT connectivity for remote monitoring and notifications.

## 📌 Project Overview

The **Smart IoT Motion Security System** is designed to improve security by automatically detecting movement in a protected area.

When the PIR motion sensor detects motion, the Arduino processes the sensor signal and activates an LED and buzzer to indicate a possible intrusion.

The system can be further enhanced with IoT connectivity to allow security alerts and monitoring from a remote location.

## 🎯 Objective

The main objectives of this project are:

* To detect unauthorized movement automatically.
* To provide an immediate local security alert.
* To use a PIR sensor for motion detection.
* To control an LED and buzzer using Arduino.
* To explore IoT-based remote security monitoring.
* To develop a simple, low-cost and expandable security system.

## ✨ Features

* 🔍 Real-time motion detection
* 🚨 Buzzer-based security alert
* 💡 LED-based visual indication
* ⚡ Arduino-based control
* 📡 IoT extension for remote monitoring
* 💰 Low-cost components
* 🏠 Suitable for home and room security
* 🔧 Easy to modify and expand

## 🧰 Components Required

### Hardware

* Arduino Uno
* PIR Motion Sensor
* LED
* Buzzer
* 220Ω Resistor
* Breadboard
* Jumper Wires
* USB Cable / Power Supply

### IoT Extension

Depending on the IoT implementation, an IoT-enabled controller or communication module can be added for sending security alerts to a remote dashboard or application.

## 🔌 Circuit Connections

### PIR Motion Sensor

| PIR Pin | Arduino       |
| ------- | ------------- |
| VCC     | 5V            |
| OUT     | Digital Pin 2 |
| GND     | GND           |

### LED

| LED         | Arduino                              |
| ----------- | ------------------------------------ |
| Anode (+)   | Digital Pin 13 through 220Ω resistor |
| Cathode (-) | GND                                  |

### Buzzer

| Buzzer       | Arduino       |
| ------------ | ------------- |
| Positive (+) | Digital Pin 8 |
| Negative (-) | GND           |

> **Note:** Pin numbers can be changed according to the Arduino program.

## ⚙️ Working Principle

1. The PIR sensor continuously monitors the surrounding area.
2. When no movement is detected, the system remains in its normal state.
3. When a person or object moves within the sensor's detection range, the PIR sensor generates a HIGH output.
4. Arduino reads this signal.
5. Arduino activates the LED and buzzer.
6. The LED provides a visual warning.
7. The buzzer provides an audible security alert.
8. With the IoT extension, the detected event can also be transmitted for remote monitoring or notification.

## 💻 Software Used

* Arduino IDE
* Tinkercad Circuits
* C/C++ Arduino Programming

## 🧪 Simulation

The circuit was designed and tested using **Tinkercad Circuits**.

The simulation demonstrates:

* PIR-based motion detection
* LED activation
* Buzzer activation
* Arduino control logic

## 📸 Project Output

When motion is detected:

**Motion Detected → Arduino → LED ON + Buzzer ON → Security Alert**

When no motion is detected:

**No Motion → Arduino → LED OFF + Buzzer OFF → Normal State**

## 🌐 IoT Extension

The basic motion detection system can be extended into an IoT-enabled security system.

Possible IoT features include:

* Remote security monitoring
* Real-time notifications
* Online event logging
* Mobile/web dashboard
* Motion detection history
* Multiple sensor monitoring
* Remote system status

This extension makes the system more useful for smart-home and remote security applications.

## 🏠 Applications

The system can be used for:

* Home security
* Room security
* Office monitoring
* Laboratory security
* Store/warehouse monitoring
* Smart building security
* Restricted-area monitoring

## 🚀 Future Enhancements

Future versions can include:

* 📱 Mobile notifications
* 📷 Camera-based verification
* ☁️ Cloud data storage
* 🌐 Web-based security dashboard
* 🔔 SMS/email alerts
* 🔋 Battery backup
* 👤 Multiple PIR sensors
* 🤖 AI-based person detection
* 📊 Motion detection analytics

## 📚 Learning Outcomes

Through this project, the following concepts were explored:

* Arduino programming
* Digital input and output
* PIR motion sensing
* LED and buzzer control
* Breadboard circuit connections
* Sensor-based automation
* Tinkercad simulation
* Basic IoT concepts
* GitHub project documentation

## 🔗 Wowki Simulation

**Wowki Project:**
https://wokwi.com/projects/475056725824574465

## 👩‍💻 Author

**K Moganaa**

Electronics and Communication Engineering Student
    ↓
Return to monitoring mode
