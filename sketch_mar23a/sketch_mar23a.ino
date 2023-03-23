#include <Keypad.h> // Biblioteca do codigo

const byte LINHAS = 4; // Linhas do teclado
const byte COLUNAS = 4; // Colunas do teclado

int ledPinYel = 50;
int ledPinRed = 52;
int ledPinGre = 48;


const char TECLAS_MATRIZ[LINHAS][COLUNAS] = { // Matriz de caracteres (mapeamento do teclado)
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

const byte PINOS_LINHAS[LINHAS] = {22, 24, 26, 28}; // Pinos de conexao com as linhas do teclado
const byte PINOS_COLUNAS[COLUNAS] = {30, 32, 34, 36}; // Pinos de conexao com as colunas do teclado

Keypad teclado_personalizado = Keypad(makeKeymap(TECLAS_MATRIZ), PINOS_LINHAS, PINOS_COLUNAS, LINHAS, COLUNAS); // Inicia teclado

void setup() {
  Serial.begin(9600); // Inicia porta serial
  pinMode(ledPinGre, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYel, OUTPUT);
}

void loop() {

  char leitura_teclas = teclado_personalizado.getKey(); // Atribui a variavel a leitura do teclado

  if (leitura_teclas) { // Se alguma tecla foi pressionada
    Serial.println(leitura_teclas); // Imprime a tecla pressionada na porta serial
    
  }
switch (leitura_teclas) {
  case '1':
     digitalWrite(ledPinRed, HIGH);
      digitalWrite(ledPinYel, LOW);
      digitalWrite(ledPinGre, LOW);
    break;
  case '2':
      digitalWrite(ledPinRed, LOW);
      digitalWrite(ledPinYel, HIGH);
      digitalWrite(ledPinGre, LOW);    
    break;
    case '3':
      digitalWrite(ledPinRed, LOW);
      digitalWrite(ledPinYel, LOW);
      digitalWrite(ledPinGre, HIGH);    
    break;
    case '4':
      digitalWrite(ledPinRed, HIGH);
      digitalWrite(ledPinYel, HIGH);
      digitalWrite(ledPinGre, LOW);    
    break;
    case '5':
      digitalWrite(ledPinRed, HIGH);
      digitalWrite(ledPinYel, LOW);
      digitalWrite(ledPinGre, HIGH);    
    break;
    case '6':
      digitalWrite(ledPinRed, LOW);
      digitalWrite(ledPinYel, HIGH);
      digitalWrite(ledPinGre, HIGH);    
    break;
    case '7':
      digitalWrite(ledPinRed, HIGH);
      digitalWrite(ledPinYel, HIGH);
      digitalWrite(ledPinGre, HIGH);    
    break;
    case '8':
      digitalWrite(ledPinRed, LOW);
      digitalWrite(ledPinYel, LOW);
      digitalWrite(ledPinGre, LOW);    
    break;
  default:
    // statements
    break;
}
}
