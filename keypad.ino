#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); // Set up the LCD's number of columns and rows
  lcd.print("Hello, World!"); // Print a message to the LCD
}

void loop() {
  // Move the cursor to the second row and first column
  lcd.setCursor(0, 1);
  lcd.print("Arduino Rocks!");
  delay(2000); // Wait for 2 seconds

  // Clear the display
  lcd.clear();
  
  // Print something new
  lcd.setCursor(0, 0);
  lcd.print("LCD Tutorial");
  lcd.setCursor(0, 1);
  lcd.print("Enjoy Learning!");
  delay(3000); // Wait for 3 seconds
}
