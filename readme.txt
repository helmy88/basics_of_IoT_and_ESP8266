# ESP8266 IoT with ThingSpeak

This repository contains a simple example code to connect an ESP8266 to ThingSpeak, an IoT platform that allows you to collect, analyze, and visualize data from connected devices.

## Prerequisites

1. **ESP8266 Board**: You will need an ESP8266 development board (e.g., NodeMCU) to run the code.

2. **Arduino IDE**: Make sure you have the Arduino IDE installed on your computer.

3. **ESP8266 Library**: Install the ESP8266 board support in the Arduino IDE. You can find instructions here: https://github.com/esp8266/Arduino#installing-with-boards-manager

4. **ThingSpeak Account**: Sign up for a ThingSpeak account at https://thingspeak.com/

## Getting Started

1. Clone this repository or download the ZIP file and extract its contents.

2. Open the `esp8266_thingspeak.ino` file in the Arduino IDE.

3. Replace the placeholders in the code:
   - Replace `your_wifi_ssid` with your Wi-Fi network name (SSID).
   - Replace `your_wifi_password` with your Wi-Fi password.
   - Replace `your_thingspeak_api_key` with your ThingSpeak API key.

4. Connect your ESP8266 board to your computer using a USB cable.

5. Select the appropriate board and port from the Tools menu in the Arduino IDE.

6. Click the "Upload" button in the Arduino IDE to upload the code to your ESP8266 board.

7. Open the Serial Monitor in the Arduino IDE. You should see the ESP8266 connecting to Wi-Fi and printing its IP address.

8. The ESP8266 will send simulated data to ThingSpeak. Open your ThingSpeak channel and watch the data being updated in real-time.

## How to Link ESP8266 with ThingSpeak

1. Sign in to your ThingSpeak account or create a new account if you haven't already.

2. Create a new channel by clicking the "Channels" tab and then "New Channel."

3. Configure your channel by setting a name, adding fields for the data you want to collect, and customizing other settings as needed.

4. Note down the Write API Key for your channel. You'll need this key to send data to your channel.

5. Open the `esp8266_thingspeak.ino` file and replace the `your_thingspeak_api_key` placeholder with your actual ThingSpeak Write API Key.

6. Upload the modified code to your ESP8266 board as described in the "Getting Started" section.

7. Once the code is running on your ESP8266, it will start sending data to your ThingSpeak channel. Open your ThingSpeak channel's page to see the data being displayed in graphs and charts.

## Contributing

Feel free to contribute to this repository by suggesting improvements, reporting issues, or adding new features.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
