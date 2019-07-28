
//Black pill
//#define LED_PIN PB12

//Blue pill
#define LED_PIN PC13

void setup()
{

pinMode(LED_PIN, OUTPUT);
}

void loop()
{
digitalWrite(LED_PIN, HIGH);
delay(1000);
digitalWrite(LED_PIN, LOW);
delay(1000);
}
