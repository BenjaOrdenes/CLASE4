
int minDado = 1;
int maxDado = 20;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int resultado = random(minDado, maxDado + 1);

  Serial.println(resultado);

  delay(1000);
  
}
