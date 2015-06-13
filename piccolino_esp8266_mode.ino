#include <Wire.h>
#include <Piccolino_OLED.h>

Piccolino_OLED display; // our OLED object

void setup()
{
  display.begin();

  // Enable wifi and sleep
  pinMode(A3,OUTPUT);
  digitalWrite(A3,HIGH);
  // float 6,7 (rx,tx)
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
  display.clear();
  display.setTextSize(2);
  display.setCursor(23,10);
  display.print("ESP8266");
  display.setCursor(0,30);
  display.print("COMMS MODE");
  display.update();

  //idle forever  
  while(1)
    delay(10000);
  
}
