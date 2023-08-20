#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// Replace with your Wi-Fi credentials
const char* ssid = "your_wifi_ssid";
const char* password = "your_wifi_password";

// ThingSpeak details
const char* thingSpeakAddress = "api.thingspeak.com";
const char* writeAPIKey = "your_thingspeak_api_key";

// Pin connected to the LED
const int ledPin = 2; // You can change this to any GPIO pin

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Simulate sensor data (replace with actual sensor reading)
  float temperature = 25.5;
  float humidity = 60.0;

  // Turn the LED on
  digitalWrite(ledPin, HIGH);

  // Send data to ThingSpeak
  sendToThingSpeak(temperature, humidity);
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);

  delay(15000); // Send data every 15 seconds
}

void sendToThingSpeak(float temp, float hum) {
  WiFiClient client;
  if (client.connect(thingSpeakAddress, 80)) {
    String data = "field1=" + String(temp) + "&field2=" + String(hum);
    String request = "POST /update HTTP/1.1\r\n" +
                     "Host: " + String(thingSpeakAddress) + "\r\n" +
                     "Connection: close\r\n" +
                     "X-THINGSPEAKAPIKEY: " + String(writeAPIKey) + "\r\n" +
                     "Content-Type: application/x-www-form-urlencoded\r\n" +
                     "Content-Length: " + String(data.length()) + "\r\n\r\n" +
                     data;
    client.print(request);
    delay(100);
    client.stop();
  }
}
