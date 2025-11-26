# Auto Intensity Street Light Controller Using RTC (DS3231 + Arduino)

This project automatically adjusts street light brightness based on real-time data from the **DS3231 RTC (Real Time Clock)** module.  
The system increases the brightness after sunset and reduces it during daytime, making it an efficient and automated lighting solution.

---

## 🌟 Features
- ⏱️ Time-based brightness control using RTC  
- 💡 Automatic day/night brightness adjustment  
- ⚡ Energy-efficient operation  
- 🔧 Simple and low-cost hardware  
- 🧰 Easy to integrate with real street-light systems  

---

## 🧩 Components Used
- **Arduino Uno**  
- **DS3231 RTC module**  
- **LED / Street-light model**  
- **220Ω resistor**  
- **Jumper wires**  
- **Breadboard**

---

## 🛠️ How It Works
1. The DS3231 sends the **current hour** to the Arduino.  
2. Arduino checks the hour and sets brightness levels:
   - **Night (6 PM – 6 AM):** High brightness  
   - **Morning (6 AM – 10 AM):** Medium brightness  
   - **Daytime (10 AM – 6 PM):** Very low brightness  
3. Brightness is controlled using **PWM (Pulse Width Modulation)**.  
4. The LED simulates a real street light.

---

## 🔧 Circuit Overview
- RTC module communicates over **I2C (SDA + SCL pins)**  
- LED connected to **PWM pin 9** of Arduino  
- Arduino reads time → compares hour → sets brightness  

*(You can upload a circuit image later if you want, it’s optional.)*

---

## 📁 File Included in This Repository
- **street_light.ino** → Main Arduino code  
- **README.md** → Documentation  

---

## 📜 Arduino Code Summary
- Reads time from DS3231 (`rtc.now().hour()` )  
- Applies PWM based on hour  
- Updates every 1 second  

---

## 🚀 Skills Demonstrated
- Embedded C programming  
- RTC (DS3231) interfacing  
- I2C communication  
- PWM-based brightness control  
- Arduino development  

---

## 📌 Future Improvements
- Add LDR sensor for hybrid (time + light) control  
- Add IoT monitoring (ESP8266/ESP32)  
- Use MOSFET to control real high-power street lights  

---

## 👤 Author
**Pradnya Gurav**  
Electronics & Communication Engineering  
Passionate about Embedded Systems & IoT  

