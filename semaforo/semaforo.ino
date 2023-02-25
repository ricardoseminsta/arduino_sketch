int verde = 10;
int amarelo = 11;
int vermelho = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(verde, HIGH);
  delay(5000); // Wait for 2000 millisecond(s)
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(amarelo, LOW);
  delay(1000);
  digitalWrite(vermelho, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(vermelho, LOW);

}
