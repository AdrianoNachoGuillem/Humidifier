#include <maker_mq3.h>

int mq3_analogPin = A0; // connected to the output pin of MQ3
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;

void setup() {
  Serial.begin(9600); // open serial at 9600 bpsP
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop()
{

  //delay(200);
  //digitalWrite(vaporizador,HIGH);
  //delay(100000);
  // give ample warmup time for readings to stabilize

  int mq3_value = analogRead(mq3_analogPin);
  Serial.println(mq3_value);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);

  if (mq3_value > 750 & mq3_value < 785) {
    digitalWrite(led1, HIGH);
  } else if (mq3_value > 785 & mq3_value < 820) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  } else if (mq3_value > 820 & mq3_value < 855) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else if (mq3_value > 855 & mq3_value < 890) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  } else if (mq3_value > 890 & mq3_value < 925) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
  } else if (mq3_value > 925 & mq3_value < 1000) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
  }
  //delay(200);
  //*digitalWrite(vaporizador, LOW);
  //delay(200);
  //digitalWrite(vaporizador, HIGH);


  delay(100); //Just here to slow down the output.*/
}
