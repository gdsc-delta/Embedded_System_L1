#include <LiquidCrystal.h>

#define RS    12   //  RS - register select
#define EN    11   //  En - enable
#define D4    5      
#define D5    4  
#define D6    3 
#define D7    2

#define Col   16
#define rows  2


// Initialize the library with the interface pins
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(Col, rows);
  
  // Print a message to the LCD.
  lcd.print("!! Embedded system Level 1 !!");
}

void loop() {
  
  // Set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0)
  lcd.setCursor(0, 1);
  
  // Print the number of seconds since reset:
  lcd.print(millis() / 1000);
}
