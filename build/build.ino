#include <LiquidCrystal.h>

int tempSensor = A0;
int reading = 0;
int DCfan = 7;

//initialize the library with n.os of the interface pins
LiquidCrystal lcd(12,11,5,4,3,2);


void setup(){
  //set LCD's n.o of columns and rows
  lcd.begin(16,2);
  //print message to LCD
  pinMode(DCfan,OUTPUT);
}

void loop(){
  
  //set cursor to column 0, line 1
  
  int reading = analogRead(tempSensor);
  float tempinCelsius = AnalogToCelsius(reading);
  
    lcd.setCursor(0,0);
    lcd.print("Temperature: ");
    //print the n.o of seconds since reset
    lcd.setCursor(0,1);
    lcd.print(tempinCelsius, DEC);
    lcd.print((char)223);
    lcd.print("C");
  
    if ( tempinCelsius > 35){
      
      digitalWrite(DCfan, HIGH);
      
    }
  else{
    digitalWrite(DCfan, LOW);
  }
  
  delay(500);
  lcd.clear();

}

float AnalogToCelsius(int reading){
  
  float tempinCelsius;
  tempinCelsius = reading / 1023.0 * 5.0 * 100 - 50;
  return tempinCelsius;
  
}
