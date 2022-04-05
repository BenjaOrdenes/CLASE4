  // el super codigo del arduino 1 >:3
  // 2022 04 04 

int led0 = 13;


void setup() {
  // put your setup code here, to run once:

 pinMode(led0, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(led0, HIGH);
 delay(250);

 digitalWrite(led0, LOW);
 delay(250);
 
}
