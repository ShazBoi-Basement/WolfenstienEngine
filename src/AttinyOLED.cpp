#include <DigisparkOLED.h>
#include <Wire.h>

void setup()
{
  oled.begin();
}

void loop()
{
  oled.fill(0xFF); //fill screen with color
  delay(1000);
  oled.clear(); //all black
  delay(1000);
  //usage: oled.setCursor(X IN PIXELS, Y IN ROWS OF 8 PIXELS STARTING WITH 0);
  oled.setCursor(0, 0); //top left
  oled.setFont(FONT8X16);
  oled.print(F("DIGISTUMP")); //wrap strings in F() to save RAM!
  oled.setFont(FONT6X8);
  oled.print(F(" OLED!"));
}
