# Smart-Light-Project
🎓 An educational project for the "Electrical Goes to School" event by the [Your Division Name] to create a smart home control system.

## ✨ Key Features
- Control up to 4 lights/devices independently.
- Accessible from anywhere via an internet connection.
- Easy to build with affordable components.
- Simple control interface using the Blynk app.

## 🛠️ Components Needed
- 1x ESP8266 (NodeMCU)
- 1x 4-Channel Hiigh Low Level Trigger Relay Module
- 1x Light Bulb & Fitting
- 1x AC Plug and Cable
- Jumper Wires
- Optional: External 5V Power Supply

## 🔌 Circuit Diagram
**⚠️ Safety Warning: You will be working with high-voltage AC electricity (220V). If you are unsure, please ask a teacher or an experienced person for help. Mistakes can lead to serious injury or fire.**

**ESP8266 to Relay Module Connections:**
- **D1** -> IN1
- **D2** -> IN2
- **D3** -> IN3
- **D4** -> IN4
- **Vin** -> VCC
- **GND** -> GND

### AC 220V High-Voltage Wiring:
This method uses a single power source for all four relays in an efficient and safe manner by "daisy-chaining" the input.

1.  Prepare the cable from the AC wall plug. Identify the **Live** and **Neutral** wires.
2.  Connect the **Live** wire from the plug to the **`COM` (Common)** terminal on **Relay 1**.
3.  Use a short piece of wire to create a **jumper** from the **`COM`** terminal of **Relay 1** to the **`COM`** terminal of **Relay 2**.
4.  Do the same for the rest.
5.  For **Light Bulb 1**: Connect one of the bulb's wires to the **`NO` (Normally Open)** terminal on **Relay 2**.
6.  Connect the remaining wire from all light bulbs to the **Neutral** wire from the AC plug. You can join all the neutral wires from the bulbs together at a single connection point.

## ⚙️ Setup Instructions

### 1. Hardware Preparation
Assemble all components according to the circuit diagram above.

### 2. Software Preparation
- Install the [Arduino IDE](https://www.arduino.cc/en/software).
- Add the ESP8266 Board Manager URL in `File > Preferences`: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
- Install the **esp8266** board from the `Tools > Board > Boards Manager` menu.
- Install the **Blynk** library from the `Sketch > Include Library > Manage Libraries` menu.

### 3. Blynk App Configuration
1.  Create a new Project in the Blynk app.
2.  Choose "ESP8266" as the device.
3.  Your **Auth Token** will be sent to your email.
4.  Add four **Button** widgets and set their output pins to Virtual Pins **V1, V2, V3, and V4**.

### 4. Upload the Code
1.  Open the `.ino` source file in the Arduino IDE.
2.  Enter your **Auth Token**, **WiFi Name (SSID)**, and **WiFi Password** into the code.
3.  Select "NodeMCU 1.0" as your board and the correct COM Port.
4.  Click the Upload button.
