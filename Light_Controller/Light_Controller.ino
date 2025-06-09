/*
 * --------------------------------------------------------------------------------
 * Project Name : WiFi Home Light Controller (Electrical Goes to School Prject)
 * Description  : This project uses an ESP8266 and a relay module to control lamp
 * up to 4 lights or electrical devices via the Blynk app.
 * Author       : Pengabdian Masyarakat - Himatro - Universitas Lampung
 * Date         : June 9, 2025
 * --------------------------------------------------------------------------------
*/

#define BLYNK_TEMPLATE_ID "TMPLxxxxxxxxx"
#define BLYNK_TEMPLATE_NAME "Light Controller"
#define BLYNK_AUTH_TOKEN "YOUR_UNIQUE_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

const int relayPin1 = D1;
const int relayPin2 = D2;
const int relayPin3 = D3;
const int relayPin4 = D4;

#define RELAY_ON  LOW
#define RELAY_OFF HIGH

#define BLYNK_PRINT Serial

BLYNK_WRITE(V1) {
  int status = param.asInt();
  digitalWrite(relayPin1, (status == 1) ? RELAY_ON : RELAY_OFF);
}

BLYNK_WRITE(V2) {
  int status = param.asInt();
  digitalWrite(relayPin2, (status == 1) ? RELAY_ON : RELAY_OFF);
}

BLYNK_WRITE(V3) {
  int status = param.asInt();
  digitalWrite(relayPin3, (status == 1) ? RELAY_ON : RELAY_OFF);
}

BLYNK_WRITE(V4) {
  int status = param.asInt();
  digitalWrite(relayPin4, (status == 1) ? RELAY_ON : RELAY_OFF);
}

void setup() {
  Serial.begin(9600);
  Serial.println("\nStarting Light Controller Project...");

  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  
  digitalWrite(relayPin1, RELAY_OFF);
  digitalWrite(relayPin2, RELAY_OFF);
  digitalWrite(relayPin3, RELAY_OFF);
  digitalWrite(relayPin4, RELAY_OFF);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}