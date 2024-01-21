volatile int contador = 0;
int anterior = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), sensor, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (anterior != contador)
  {
    Serial.println(contador);
    anterior = contador;
  }
}

void sensor() {
  contador++;
}