#include <Servo.h>

Servo myServo;

#untuk mendefinisikan pin digital lampu dan sudut servo motor yang terbuka

#define LED_RED 11
#define LED_GREEN 9
#define SUDUT_BUKA 90
#define SUDUT_TUTUP 0

#menset pin digital led dan servo motor
void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  myServo.attach(12); 
  myServo.write(CLOSE_ANGLE); 

}

#ketika lampu merah menyala, servo motor tertutup, ketika lampu hijau menyala, servo motor terbuka
void loop() {

  digitalWrite(LED_GREEN, HIGH);
  myServo.write(SUDUT_BUKA);
  delay(30000);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_RED, HIGH);
  myservo.write(SUDUT_TUTUP);
  delay(30000);
  digitalWrite(LED_RED, LOW);

}
