#include <Arduino.h>
#define LED1 8
#define LED2 9
#define BT1 7
#define BT2 6

void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  pinMode(6, INPUT_PULLUP);
  // put your setup code here, to run once:
}

void loop() {
  if(digitalRead(BT1)==LOW){
    digitalWrite(LED1, HIGH);
    delay(555);
    digitalWrite(LED2, LOW);
  }
  if(digitalRead(BT2)==LOW){
    digitalWrite(LED2, HIGH);
    delay(555);
    digitalWrite(LED1, LOW);
  }
  // put your main code here, to run repeatedly:
}