# Smart IoT Motion Security and Monitoring System

An ESP32-based IoT security system that detects motion using a PIR sensor, automatically activates an LED and buzzer alarm, counts motion events, and provides real-time security monitoring through a web-based dashboard.

---

## 📌 Project Overview

The **Smart IoT Motion Security and Monitoring System** is an IoT-enabled security project developed using an **ESP32 microcontroller** and a **PIR (Passive Infrared) motion sensor**.

The system continuously monitors the surrounding area for human movement. When motion is detected, the ESP32 automatically activates an LED and buzzer to provide a local security alert.

In addition to the local alarm, the ESP32 connects to Wi-Fi and hosts a simple web server. The user can access the web dashboard through a browser to monitor the current security status and the number of motion events detected.

This project demonstrates the integration of **embedded systems, sensors, automation, Wi-Fi communication, and IoT-based monitoring**.

---

## 🎯 Objectives

The main objectives of this project are:

- To detect human motion using a PIR sensor.
- To interface a PIR sensor with an ESP32.
- To automatically activate an LED and buzzer when motion is detected.
- To count and record motion events.
- To implement automatic alarm control using programming logic.
- To connect the ESP32 to Wi-Fi.
- To create an IoT-based web monitoring system.
- To display real-time security information through a web browser.
- To gain practical experience in embedded systems and IoT development.

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|----------|
| ESP32 Development Board | 1 |
| PIR Motion Sensor | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Buzzer | 1 |
| Jumper Wires | As required |
| Wokwi Simulator | 1 |

---

## 🔌 Circuit Connections

The following connections are used in the project:

| Component | Pin | ESP32 Connection |
|-----------|-----|------------------|
| PIR Sensor | VCC (+) | VIN / 5V |
| PIR Sensor | OUT (D) | GPIO 27 |
| PIR Sensor | GND (-) | GND |
| LED | Anode (+) | GPIO 26 through 220Ω resistor |
| LED | Cathode (-) | GND |
| Buzzer | Positive (+) | GPIO 25 |
| Buzzer | Negative (-) | GND |

---

## ⚙️ Working Principle

The system works in the following sequence:

1. The ESP32 starts and initializes the PIR sensor, LED, and buzzer.
2. The ESP32 connects to the Wi-Fi network.
3. The ESP32 starts an HTTP web server.
4. The PIR sensor continuously monitors the surroundings.
5. When motion is detected, the PIR sensor sends a HIGH signal to the ESP32.
6. The ESP32 detects the signal and triggers the security response.
7. The LED turns ON.
8. The buzzer turns ON.
9. The motion event counter is increased.
10. The event information is displayed in the Serial Monitor.
11. The web dashboard displays the security status and motion-event count.
12. The alarm automatically turns OFF after approximately 5 seconds.
13. The system continues monitoring for new motion events.

---

## 🤖 Automation Logic

The project uses automatic decision-making through `IF/ELSE` conditions.

```text
IF motion is detected
    ↓
Increase motion event counter
    ↓
Turn ON LED
    ↓
Turn ON buzzer
    ↓
Start 5-second alarm timer

IF 5 seconds have elapsed
    ↓
Turn OFF LED
    ↓
Turn OFF buzzer
This allows the system to respond automatically without requiring manual intervention.

##🌐 IoT Web Monitoring

The ESP32 is connected to Wi-Fi and operates as a simple HTTP web server.

The web dashboard allows the user to monitor:

Current security status
Motion event count
Alarm status

The dashboard automatically refreshes periodically to display updated information.

System Secure
SMART SECURITY SYSTEM

Status: SYSTEM SECURE
Motion Events: 0
Alarm: OFF
Motion Detected
SMART SECURITY SYSTEM

Status: INTRUSION DETECTED!
Motion Events: 1
Alarm: ON
💻 Technologies Used
ESP32
Arduino C/C++
PIR Motion Sensor
Wi-Fi
HTTP Web Server
IoT
Wokwi Simulation
🧪 Testing

The system was tested using the Wokwi online simulation environment.

Test Case 1 – No Motion

Input: No motion detected by PIR sensor.

Expected Output:

LED: OFF
Buzzer: OFF
Security Status: SYSTEM SECURE
Test Case 2 – Motion Detected

Input: Motion detected by PIR sensor.

Expected Output:

LED: ON
Buzzer: ON
Motion counter increases
Security Status: INTRUSION DETECTED
Alarm Status: ON
Test Case 3 – Alarm Timeout

Input: 5 seconds elapsed after motion detection.

Expected Output:

LED: OFF
Buzzer: OFF
System returns to monitoring mode
📊 Serial Monitor Output

Example Serial Monitor output:

Connecting to WiFi...
WiFi Connected!
IP Address: <ESP32 IP Address>
Web Server Started

INTRUSION DETECTED!
Motion Events: 1
LED: ON
BUZZER: ON

Alarm automatically stopped.
System Secure.
🔗 Wokwi Simulation

The project was developed and tested using Wokwi.

Add your Wokwi simulation link below:

Wokwi Simulation:
https://wokwi.com/projects/475056725824574465

🚀 Future Enhancements

The system can be further improved by adding:

LCD or OLED display for local status monitoring.
Mobile notifications for intrusion alerts.
Telegram or email notifications.
Cloud-based data storage.
Temperature and humidity monitoring.
Camera-based intruder verification.
Multiple PIR sensors for wider coverage.
Mobile application for remote monitoring.
Real-time motion-event history.
Remote alarm control.
Battery backup for continuous operation.
🌍 Applications

This project can be used or adapted for:

Home security systems
Office security
Laboratory monitoring
Classroom security
Restricted-area monitoring
Small-scale industrial security
IoT-based surveillance
Smart building security
📚 Learning Outcomes

Through this project, I gained practical experience in:

ESP32 programming
PIR sensor interfacing
Digital input and output control
LED and buzzer control
Conditional programming using IF/ELSE
Motion-event counting
Timer-based automation
Wi-Fi connectivity
HTTP web-server implementation
IoT-based monitoring
Embedded system simulation using Wokwi
🔐 Key Features
✅ PIR-based motion detection
✅ Automatic security alarm
✅ LED visual indication
✅ Buzzer audio alert
✅ Motion-event counter
✅ Automatic 5-second alarm timeout
✅ ESP32 Wi-Fi connectivity
✅ IoT web monitoring
✅ Real-time security status
✅ Wokwi simulation support
👩‍💻 Author

K Moganaa

Electronics and Communication Engineering Student

📄 License

This project is developed for educational, internship, and learning purposes.

    ↓
Return to monitoring mode
