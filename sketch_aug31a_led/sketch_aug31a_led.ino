int ledPin = 4;
int pushButton = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pushButton, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int botaoEstado = digitalRead(pushButton);
  if (botaoEstado == 1) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    digitalWrite(ledPin, HIGH);
    delay(300);
  }
  delay(100);
}
