// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD to the first row.
  lcd.print("Stopwatch:");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of hours since reset:
  lcd.print(millis() / 3600000);
  lcd.print("h:");
  // print the number of minutes since reset
  lcd.print(millis() / 60000);
  lcd.print("m:");
  // print the number of seconds since reset
  lcd.print(millis() / 1000);
  lcd.print("s");
}
