#include <TinyGPS++.h> 

// -----------------gps
TinyGPSPlus gps;
#define ss3 Serial1
static const uint32_t GPSBaud = 9600;
// -----------------gps

void setup() 
{
  Serial.begin(9600);
  ss3.begin(GPSBaud);
}
uint32_t time;
void loop() 
{
  if ( (millis()-time)<1000 )
  {
    if (ss3.available())
      gps.encode(ss3.read());
  }
  time = millis();
Serial.println("TEST");
Serial.println(gps.location.lat(),6);
Serial.println(gps.location.lng(),6);
Serial.println(gps.altitude.meters(),6);
Serial.println(gps.satellites.value(),6);

Serial.println("_____");
delay(1250);
}
