#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "d4xdtX6Li8IG6_pyJEDUjIJ_yqUuiryy";
char ssid[] = "NYEH";
char pass[] = "light gaia";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
