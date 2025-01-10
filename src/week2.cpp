/*
#include <Arduino.h>
int LD1 = 23;
int LD2 = 19;
int LD3 = 18;
int LD4 = 5;
int LD5 = 17;
int LD6 = 16;
int LD7 = 4;
int LD8 = 0;
int potPin = 36;

void setup(){
    pinMode (LD1,OUTPUT);
    pinMode (LD2,OUTPUT);
    pinMode (LD3,OUTPUT);
    pinMode (LD4,OUTPUT);
    pinMode (LD5,OUTPUT);
    pinMode (LD6,OUTPUT);
    pinMode (LD7,OUTPUT);
    pinMode (LD8,OUTPUT);
}
void loop() {
    int potValue = analogRead(potPin); 
    int lang = map(potValue, 0, 4095, 0, 4000); 
   
    digitalWrite(LD1, LOW);
    digitalWrite(LD2, LOW);
    digitalWrite(LD3, LOW);
    digitalWrite(LD4, LOW);
    digitalWrite(LD5, LOW);
    digitalWrite(LD6, LOW);
    digitalWrite(LD7, LOW);
    digitalWrite(LD8, LOW);

    
    if (lang >= 0 && lang < 500) {
        digitalWrite(LD1, HIGH);
    }
    else if (lang >= 500 && lang < 1000) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
    }
    else if (lang >= 1000 && lang < 1500) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
    }
    else if (lang >= 1500 && lang < 2000) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
        digitalWrite(LD4, HIGH);
    }
    else if (lang >= 2000 && lang < 2500) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
        digitalWrite(LD4, HIGH);
        digitalWrite(LD5, HIGH);
    }
    else if (lang >= 2500 && lang < 3000) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
        digitalWrite(LD4, HIGH);
        digitalWrite(LD5, HIGH);
        digitalWrite(LD6, HIGH);
    }
    else if (lang >= 3000 && lang < 3500) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
        digitalWrite(LD4, HIGH);
        digitalWrite(LD5, HIGH);
        digitalWrite(LD6, HIGH);
        digitalWrite(LD7, HIGH);
    }
    else if (lang >= 3500 && lang <= 4000) {
        digitalWrite(LD1, HIGH);
        digitalWrite(LD2, HIGH);
        digitalWrite(LD3, HIGH);
        digitalWrite(LD4, HIGH);
        digitalWrite(LD5, HIGH);
        digitalWrite(LD6, HIGH);
        digitalWrite(LD7, HIGH);
        digitalWrite(LD8, HIGH);
    }

    delay(10); 
}
*/