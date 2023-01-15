#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
 
#define BLYNK_TEMPLATE_ID "TMPLU4MTBXH7"
#define BLYNK_DEVICE_NAME "AL AMIN SMART SWITCH"
#define BLYNK_AUTH_TOKEN "a_p50IXYMPi86akloSwHoB2x82VTWX6S"


// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "*****************";
char pass[] = "*****************";
 
  int relay1 = 12;  // D6 pin 
  int relay2 = 14;  // D2 pin 
  int relay3 = 4;   // D1 pin 
  int relay4 = 5;   // D5 pin 
 
void setup()
{
  // Debug console
  Serial.begin(115200);
 
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
 
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
 
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}
 
void loop()
{
  Blynk.run();
}
