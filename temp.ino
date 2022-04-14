// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

//Set up PINS
int led = D7;  // The on-board LED
DHT dht(A0, DHT11);


void setup() {
  pinMode(led, OUTPUT); 
  dht.begin(); //THIS FUNCTION STARTS THE METHOD DHT
}

void loop() {
  digitalWrite(led, HIGH);   // Turn ON the LED

  float temp = dht.getTempCelcius(); //THE FLOAT TEMP FILE WILL BE SET TO WHATEVER THE TEMPERATURE IS
  Particle.publish("temp", String(temp)), PRIVATE; //We will convert float to string and then print it out
  delay(300);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(300);               // Wait for 30 seconds
}