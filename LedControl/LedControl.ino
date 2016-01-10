//pinNumber:8 is for LED
int ledPin = 8;


void setup() {

  pinMode(ledPin,OUTPUT);

}

void loop() {
  //yak
  digitalWrite(ledPin,HIGH);
  delay(1000);

  //Söndür
  digitalWrite(ledPin,LOW);
  delay(1000);
  

}
