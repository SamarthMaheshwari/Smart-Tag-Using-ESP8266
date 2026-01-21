#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

//Wi-Fi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

//GPIO
#define BUZZER_PIN 2   // GPIO2 (ESP-12F)

bool buzzerState = false;

//Web Page
const char webpage[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <title>ESP8266 Smart Tag</title>
</head>
<body style="text-align:center;">
  <h2>ESP8266 Smart Tag</h2>
  <p>Press button to locate device</p>
  <form action="/buzz" method="POST">
    <button style="font-size:20px;">Find Device</button>
  </form>
</body>
</html>
)rawliteral";

//HTTP Handlers
void handleRoot() {
  server.send_P(200, "text/html", webpage);
}

void handleBuzz() {
  buzzerState = !buzzerState;
  server.sendHeader("Location", "/");
  server.send(303);
}

//Setup
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  server.on("/", HTTP_GET, handleRoot);
  server.on("/buzz", HTTP_POST, handleBuzz);
  server.begin();
}

//Loop
void loop() {
  server.handleClient();

  if (buzzerState) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(300);
    digitalWrite(BUZZER_PIN, LOW);
    delay(300);
  }
}
