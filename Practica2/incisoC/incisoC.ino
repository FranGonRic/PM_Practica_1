const int LED1 = 10;
const int LED2 = 11;
const int LED3 = 12;
const int LED4 = 50;

int tiemp =250;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2,HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2,HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, HIGH);
   delay(tiemp);

   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2,HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2,HIGH);
   delay(tiemp);
   digitalWrite(LED1,HIGH);
   delay(tiemp);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, LOW);
   delay(tiemp);
}
