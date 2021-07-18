// VARIABLES


  int ldr = A0; //Atribui A0 a variável ldr
  int valorldr = 0; //Declara a variável valorldr como inteiro

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldr, INPUT);  //Define ldr (pino analógico A0) como saída

  Serial.begin(9600); //Inicialização da comunicação serial, com taxa de

}

void loop() {
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, HIGH);

  valorldr = analogRead(ldr); //Lê o valor do sensor ldr e armazena na variável valorldr
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
}