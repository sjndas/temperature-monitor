# 🌡️ Temperature Monitor (DHT11 + Arduino)

## 📌 Description
A simple temperature and humidity monitoring system using a DHT11 sensor, 16x2 LCD display, and LED alert.

---

## 🔧 Components Used
- Arduino UNO  
- DHT11 Sensor  
- 16x2 LCD  
- LED  
- Resistors  

---

## ⚙️ Features
- Displays temperature & humidity on LCD  
- LED turns ON when temperature ≥ 32°C  
- Uses non-blocking `millis()` timing (no delay)

---

## 🔌 Pin Connections
- DHT11 → Digital Pin 8  
- LED → Digital Pin 9  
- LCD → Pins 12, 11, 5, 4, 3, 2  

---


## 🚀 Future Improvements
- Add buzzer alert  
- Add fan using transistor  
- Convert to IoT using ESP8266/ESP32  
