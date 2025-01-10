/*
#include <Arduino.h>
#define VOLUME_P1 36
#define VOLUME_P2 39
#define LED1_P1 23
#define LED2_P1 19
#define LED3_P1 18
#define LED4_P1 5
#define LED1_P2 17
#define LED2_P2 16
#define LED3_P2 4
#define LED4_P2 0

void setup() {
 
  pinMode(LED1_P1, OUTPUT);
  pinMode(LED2_P1, OUTPUT);
  pinMode(LED3_P1, OUTPUT);
  pinMode(LED4_P1, OUTPUT);

  pinMode(LED1_P2, OUTPUT);
  pinMode(LED2_P2, OUTPUT);
  pinMode(LED3_P2, OUTPUT);
  pinMode(LED4_P2, OUTPUT);


  digitalWrite(LED1_P1, LOW);
  digitalWrite(LED2_P1, LOW);
  digitalWrite(LED3_P1, LOW);
  digitalWrite(LED4_P1, LOW);

  digitalWrite(LED1_P2, LOW);
  digitalWrite(LED2_P2, LOW);
  digitalWrite(LED3_P2, LOW);
  digitalWrite(LED4_P2, LOW);

  
  pinMode(VOLUME_P1, INPUT);
  pinMode(VOLUME_P2, INPUT);
}

void loop() {
  
  int volumeP1 = analogRead(VOLUME_P1);
  int volumeP2 = analogRead(VOLUME_P2);


  if (volumeP1 > 4000 && volumeP2 > 4000) {
    
    for (int i = 0; i < 5; i++) { 
      
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, LOW);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED4_P1, LOW);

      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED3_P2, HIGH);
      digitalWrite(LED4_P2, LOW);

      delay(500); 

    
      digitalWrite(LED1_P1, LOW);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED4_P1, HIGH);

      digitalWrite(LED1_P2, LOW);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, LOW);
      digitalWrite(LED4_P2, HIGH);

      delay(500); 
    }
  } else {
    
    if (volumeP2 > 3600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED4_P1, HIGH);
    } else if (volumeP2 > 2800) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED4_P1, LOW);
    } else if (volumeP2 > 1600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED4_P1, LOW);
    } else if (volumeP2 > 600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, LOW);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED4_P1, LOW);
    } else {
      digitalWrite(LED1_P1, LOW);
      digitalWrite(LED2_P1, LOW);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED4_P1, LOW);
    }

    // Control LEDs for P2
    if (volumeP1 > 3600) {
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, HIGH);
      digitalWrite(LED4_P2, HIGH);
    } else if (volumeP1 > 2800) {
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, HIGH);
      digitalWrite(LED4_P2, LOW);
    } else if (volumeP1 > 1600) {
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    } else if (volumeP1 > 600) {
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED3_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    } else {
      digitalWrite(LED1_P2, LOW);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED3_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    }
  }

  delay(100); // Small delay for stability
}
*/