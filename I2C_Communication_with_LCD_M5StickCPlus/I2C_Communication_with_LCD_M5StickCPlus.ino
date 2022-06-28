#include <M5StickCPlus.h>
void setup() {
  // put your setup code here, to run once:
  M5.begin();
  M5.Lcd.setRotation(3);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextColor(GREEN);
  M5.Lcd.setTextSize(3);
  M5.Lcd.printf("Jonathan SID: \n");
  M5.Lcd.printf("1155142863 ");
}

void loop() {
  // put your main code here, to run repeatedly:

}
