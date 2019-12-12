#include <maker_mq3.h>

int mq3_analogPin = A0; // connected to the output pin of MQ3
int vaporizador = 9; //define the pin for the Vaper
boolean isOn = false;

void setup() {
  Serial.begin(9600); // open serial at 9600 bpsP
  pinMode(vaporizador, OUTPUT);
  digitalWrite(vaporizador, HIGH);
}

void loop()
{

  int mq3_value = analogRead(mq3_analogPin);
  Serial.println(mq3_value);


  if (mq3_value > 800 && !isOn) {
    digitalWrite(vaporizador, LOW);
    delay(200);
    digitalWrite(vaporizador, HIGH);
    delay(200);
    digitalWrite(vaporizador, LOW);
    delay(200);
    digitalWrite(vaporizador, HIGH);
    delay(200);
    isOn = true;
    //*digitalWrite(vaporizador, LOW);
    //delay(200);
    //digitalWrite(vaporizador, HIGH);
  }

  if (mq3_value < 800 && isOn) {
    digitalWrite(vaporizador, LOW);
    delay(200);
    digitalWrite(vaporizador, HIGH);
    delay(200);
    isOn = false;
  }

  delay(100); //Just here to slow down the output.*/
}
