#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <ArduinoJson.h>

// WiFi credentials
const char* ssid = "YourSSID";
const char* password = "YourPassword";

// Telegram Bot credentials
const char* botToken = "YourBotToken";
const String chat_id = "YourChatID";

WiFiClientSecure client;
UniversalTelegramBot bot(botToken, client);

// Ultrasonic Sensor Pins
const int trigPin = 5;
const int echoPin = 18;
long duration;
int distance;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected");

  // Initialize secure connection
  client.setInsecure();
}

void loop() {
  // Send a pulse to the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  distance = duration * 0.034 / 2;

  // Check if distance is less than 20 cm
  if (distance < 20) {
    Serial.println("Object detected!");
    sendTelegramMessage("Object detected by the Ultrasonic sensor!");
    delay(5000); // Delay to avoid spamming Telegram with messages
  }

  delay(100); // Adjust as needed
}

void sendTelegramMessage(String message) {
  if (bot.sendMessage(chat_id, message, "")) {
    Serial.println("Message sent successfully");
  } else {
    Serial.println("Failed to send message");
  }
}