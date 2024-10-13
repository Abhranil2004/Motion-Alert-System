# Motion Alert System

This project is an Arduino-based **motion alert system** that uses a motion sensor to detect movement and sends alerts via a Telegram bot.

## Features

- Motion detection using a PIR sensor
- Sends real-time alerts to a Telegram bot
- Customizable settings for alert frequency and sensitivity

## Components

- Arduino Uno or compatible board
- PIR motion sensor
- ESP8266/ESP32 module for Wi-Fi connectivity
- Jumper wires
- Breadboard
- LED (optional)

## Libraries

Make sure to install the following libraries before uploading the code to your Arduino:

- [UniversalTelegramBot](https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot) – For sending Telegram messages
- [WiFiClientSecure](https://github.com/esp8266/Arduino) – For secure connection to Telegram API

To install the necessary libraries:
1. Open Arduino IDE.
2. Go to **Sketch** -> **Include Library** -> **Manage Libraries**.
3. Search for and install `UniversalTelegramBot` and `WiFiClientSecure`.

## Setup

1. Clone this repository or download the ZIP file and extract it.
   
   ```bash
   git clone https://github.com/your-username/motion-alert-system.git
2. Open the .ino file in the Arduino IDE.

3. Replace the placeholders in the code with your own credentials:

 - WiFi SSID and Password
 - Telegram Bot Token
 - Chat ID
4. Upload the code to your Arduino.

## How It Works
1. The PIR sensor detects motion.
2. The Arduino sends a notification to the Telegram bot using the Universal Telegram Bot library.
3. You will receive an alert on Telegram whenever motion is detected.
## Usage
- Make sure your Arduino is connected to Wi-Fi.
- Open Telegram and start the bot with the token you've set up.
- The bot will send a message whenever the sensor detects motion.
## Troubleshooting
If you don't receive alerts, check the Wi-Fi connection and ensure that your Telegram Bot API token and chat ID are correctly configured.
Ensure that the PIR sensor is properly wired to the Arduino and is functioning.
## License

This project is licensed under the MIT License. See the [LICENSE](https://github.com/Abhranil2004/Motion-Alert-System/tree/general?tab=MIT-1-ov-file) file for more details.


Contributions
Feel free to submit issues or pull requests if you want to contribute to this project.

Contact
For any issues or questions, please contact me at:

Website: https://my-portfolio-abhranil-dutta.netlify.app/ <br>
Email: abhranildutta1903@gmail.com
