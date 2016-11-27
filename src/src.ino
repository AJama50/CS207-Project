#include <LiquidCrystal.h>

int tempSensor = A0;
int reading = 0;
int relay = 7;

//initialize the library with n.os of the interface pins
LiquidCrystal lcd(12,11,5,4,3,2);


void setup(){
  //set LCD's n.o of columns and rows
  lcd.begin(16,2);
  //print message to LCD
  pinMode(relay,OUTPUT);
}

void loop(){
  
  //set cursor to column 0, line 1
  
  reading = analogRead(tempSensor);
  
  int celsius = reading/2;
    lcd.setCursor(0,0);
    lcd.print("Temperature: ");
    //print the n.o of seconds since reset
    lcd.setCursor(0,1);
    lcd.print(celsius, DEC);
    lcd.print((char)223);
    lcd.print("C");
  
    if ( celsius > 35){
      
      digitalWrite(7, HIGH);
      
    }
  else{
    digitalWrite(7, LOW);
  }
  
  delay(500);
  lcd.clear();

}


