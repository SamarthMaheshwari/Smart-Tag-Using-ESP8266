# Smart-Tag-Using-ESP8266
* A compact IoT-based Smart Tag / Key Finder built using ESP-12E (ESP8266).
* It helps locate misplaced keys by triggering a buzzer over Wi-Fi using a simple web interface.
* The project features a custom-designed PCB and is inspired by the Circuit Digest Smart Key Finder.

## Overview
* ESP8266 connects to Wi-Fi and hosts a web page
* Buzzer can be toggled from any device on the same network
* Designed as a small, low-power IoT device with custom PCB

## Features

* Wi-Fi enabled Smart Tag
* Buzzer for key finding
* Built-in web server
* Custom PCB design
* 3.3V battery powered
* Control via mobile or laptop browser

## Hardware Used

1. ESP-12E (ESP8266)
2. Active Buzzer
3. 3.3V Voltage Regulator
4. Battery / Power Source
5. Custom PCB

## Repository Structure

📁 Smart_Tag_json
→ EasyEDA source file of the complete Smart Tag project

📁 Schematic_Diagram
→ Circuit schematic design

📁 Pcb_Layout
→ PCB layout and routing files

📁 2D_View
→ PCB top and bottom 2D views

📁 3D_View
→ 3D visualization of the PCB

📁 Code
→ ESP-12E (ESP8266) firmware source code

## Firmware

1. Connects ESP8266 to Wi-Fi
2. Runs a web server on port 80
3. Web button toggles buzzer ON/OFF
4. Firmware located in Code

## Working

1. Power ON the Smart Tag
2. ESP-12E connects to Wi-Fi
3. Open browser and enter ESP8266 IP
4. Press button on web page
5. Buzzer sounds to locate keys

## Reference
Inspired by Circuit Digest tutorial:
https://circuitdigest.com/microcontroller-projects/diy-iot-based-key-chain-finder-using-esp8266

## License
Open-source project for learning and educational purposes.

⭐ Designed & built using a custom PCB with ESP-12E (ESP8266)
