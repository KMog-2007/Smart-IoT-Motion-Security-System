#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WebServer server(80);

// Pin connections
const int PIR_PIN = 27;
const int LED_PIN = 26;
const int BUZZER_PIN = 25;

int motionCount = 0;
int previousMotion = LOW;

bool alarmActive = false;
unsigned long alarmStartTime = 0;

// Web page
void handleRoot() {

  int motion = digitalRead(PIR_PIN);

  String status;
  String alarm;

  if (motion == HIGH) {
    status = "INTRUSION DETECTED!";
    alarm = "ON";
  } else {
    status = "SYSTEM SECURE";
    alarm = "OFF";
  }

  String html = "<!DOCTYPE html>";
  html += "<html>";
  html += "<head>";
  html += "<meta http-equiv='refresh' content='2'>";
  html += "<title>Smart Security System</title>";
  html += "</head>";

  html += "<body>";
  html += "<h1>SMART SECURITY SYSTEM</h1>";

  html += "<h2>Status: " + status + "</h2>";
  html += "<p>Motion Events: " + String(motionCount) + "</p>";
  html += "<p>Alarm: " + alarm + "</p>";

  html += "</body>";
  html += "</html>";

  server.send(200, "text/html", html);
}

void setup() {

  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Connecting to WiFi...");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected!");

  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);

  server.begin();

  Serial.println("Web Server Started");
}

void loop() {

  server.handleClient();

  int motion = digitalRead(PIR_PIN);

  // New motion detected
  if (motion == HIGH && previousMotion == LOW) {

    motionCount++;

    alarmActive = true;
    alarmStartTime = millis();

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("==============================");
    Serial.println("INTRUSION DETECTED!");
    Serial.print("Motion Events: ");
    Serial.println(motionCount);
    Serial.println("LED: ON");
    Serial.println("BUZZER: ON");
  }

  // Automatically stop alarm after 5 seconds
  if (alarmActive && millis() - alarmStartTime >= 5000) {

    alarmActive = false;

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("Alarm automatically stopped.");
    Serial.println("System Secure.");
  }

  previousMotion = motion;

  delay(50);
}
