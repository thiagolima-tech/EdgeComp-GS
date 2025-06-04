#include <LiquidCrystal_I2C.h>

const int trigPin = 2;        
const int echoPin = 3;        
const int ledPin = 12;        
const int buzzerPin = 13;     
const int led2Pin = 11;       

LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  delay(2000);
}

void loop() {
  long duration;
  int cm;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  cm = duration / 29 / 2;

  lcd.clear();

  if (cm < 150) {
    digitalWrite(led2Pin, LOW);
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
    lcd.setCursor(0, 0);
    lcd.print("Perigo");
    lcd.setCursor(0, 1);
    lcd.print("De Enchente!");
  } 
  else if (cm < 200) {
    digitalWrite(led2Pin, HIGH);
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);;
    lcd.setCursor(0, 0);
    lcd.print("Nivel Alto:");
    lcd.setCursor(0, 1);
    lcd.print(cm);
    lcd.print(" cm");
  } 
  else {
    digitalWrite(led2Pin, LOW);
    noTone(buzzerPin);
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Nivel Seguro:");
    lcd.setCursor(0, 1);
    lcd.print(cm);
    lcd.print(" cm");
  }

  delay(500);
}
