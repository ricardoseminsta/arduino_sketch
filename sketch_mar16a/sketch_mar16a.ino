#include <Servo.h> //INCLUSÃO DA BIBLIOTECA NECESSÁRIA
 
Servo servo; //OBJETO DO TIPO SERVO
 
const int pinoPOT = A8; //PINO ANALÓGICO UTILIZADO PELO POTENCIÔMETRO
const int pinoServo = 53; //PINO DIGITAL UTILIZADO PELO SERVO
const int ledPin = A7;

int valPot = 0;
 
int leituraA0 = 0; //VARIÁVEL QUE ARMAZENA O VALOR LIDO NA PORTA ANALÓGICA           
  
void setup(){
  servo.attach(pinoServo); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);//Configura ledPin como saída
  pinMode(pinoPOT, INPUT); //DEFINE A PORTA COMO ENTRADA 
} 
void loop(){ 
  leituraA0 = analogRead(pinoPOT); //LÊ O VALOR NA PORTA ANALÓGICA (VALOR LIDO EM BITS QUE VAI DE 0 A 1023 BITS) 
  leituraA0 = map(leituraA0, 0, 1023, 0, 180); //EXECUTA A FUNÇÃO "map" DE ACORDO COM OS PARÂMETROS PASSADOS 
  
  servo.write(leituraA0); //APLICA AO SERVO O VALOR / POSIÇÃO GERADO PELA FUNÇÃO "map"


  valPot =  analogRead(pinoPOT); //Faz a leitura analógica do pino em que o potenciômetro esta ligado
  valPot = map(valPot,0,1023,0,255); //Utilizando a função map() para transformar uma escala de 0-1023 em uma escala 0 a 255
  analogWrite(ledPin, valPot);//Aciona o LED proporcionalmente à leitura analógica
  
  Serial.println(valPot);//Imprime valorpot na serial
  delay(1); //INTERVALO DE 1 MILISSEGUNDO
}
