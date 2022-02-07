#include <LiquidCrystal.h>//Library for LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//LCD pins at which it is attached to the Arudino
void setup()//method used to run the code for once
{
  lcd.begin(16, 2);//LCD order
  lcd.print("Team RLMC is the BEST");//prints on LCD
  lcd.setCursor(0,1);//Setting the cursor on LCD
  lcd.print("<3");//prints on LCD
  delay(1000);//delay of 1 second
}
void loop() //used to run the code repeatedly
{
 for(int PositionCount=0;PositionCount<13; PositionCount++)//loop for scrolling the LCD text
  {
    lcd.scrollDisplayLeft();//builtin command to scroll left the text
    delay(150);// delay of 150 msec
    }
   for(int PositionCount=0; PositionCount<29; PositionCount++)
   {
    PositionCount=0;
    lcd.scrollDisplayLeft();//builtin command to scroll the text left again
    delay(150);//delay of 150 msec
    }
}
