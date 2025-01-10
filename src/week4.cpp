/*
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22

int sw1 = 15; // สวิตช์เลือกเมนู
#define led1 23
#define led2 19
#define led3 18
#define led4 5
#define led5 17
#define led6 16
#define led7 4
#define led8 0

int menu = 0; // เก็บสถานะของเมนูที่เลือก
LiquidCrystal_I2C lcd(0x27, 20, 4); // ตั้งค่า LCD

// ฟังก์ชันสำหรับควบคุม LED
void allLedsOn() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
}

void allLedsOff() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
}

void alternateBlink() {
  static bool state = false;
  state = !state;
  digitalWrite(led1, state);
  digitalWrite(led3, state);
  digitalWrite(led5, state);
  digitalWrite(led7, state);
  digitalWrite(led2, !state);
  digitalWrite(led4, !state);
  digitalWrite(led6, !state);
  digitalWrite(led8, !state);
  delay(500);
}

void sequentialBlink() {
  static int currentLed = 0;
  int leds[] = {led1, led2, led3, led4, led5, led6, led7, led8};
  allLedsOff();
  digitalWrite(leds[currentLed], HIGH);
  currentLed = (currentLed + 1) % 8;
  delay(300);
}

void pairedBlink() {
  static int currentPair = 0;
  int leds[] = {led1, led2, led3, led4, led5, led6, led7, led8};
  allLedsOff();
  digitalWrite(leds[currentPair], HIGH);
  digitalWrite(leds[currentPair + 1], HIGH);
  currentPair += 2;
  if (currentPair >= 8) currentPair = 0;
  delay(500);

}

void runningLight() {
  int leds[] = {led1, led2, led3, led4, led5, led6, led7, led8}; // เก็บลำดับพินของ LED

  // สว่างเรียงลำดับจากหลอดแรกถึงหลอดสุดท้าย
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH);  // เปิดไฟ LED
    delay(200);                  // รอเวลา 200 ms ต่อหลอด
  }

  // ดับเรียงลำดับกลับทีละหลอด
  for (int i = 7; i >= 0; i--) {
    digitalWrite(leds[i], LOW);   // ปิดไฟ LED
    delay(200);                   // รอเวลา 200 ms ต่อหลอด
  }
}
void allBlinkTogether() {
  static bool state = false;
  state = !state;
  digitalWrite(led1, state);
  digitalWrite(led2, state);
  digitalWrite(led3, state);
  digitalWrite(led4, state);
  digitalWrite(led5, state);
  digitalWrite(led6, state);
  digitalWrite(led7, state);
  digitalWrite(led8, state);
  delay(500);
}

void setup() {
  lcd.init(I2C_SDA, I2C_SCL);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("LED Control Menu");
  
  pinMode(sw1, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
  if (digitalRead(sw1) == LOW) {
    menu++;
    if (menu > 6) menu = 1;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Selected Menu: ");
    lcd.setCursor(0, 1);
    lcd.print(menu);
    delay(300);
  }

  switch (menu) {
    case 1:
      allLedsOn();
      break;
    case 2:
      alternateBlink();
      break;
    case 3:
      sequentialBlink();
      break;
    case 4:
      pairedBlink();
      break;
    case 5:
      runningLight();
      break;
    case 6:
      allBlinkTogether();
      break;
    default:
      allLedsOff();
      break;
  }
}
*/