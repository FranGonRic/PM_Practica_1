const int LED1 = 10;
const int btn = 2;

int buttonState = 0;
int tiemp = 500;
int counter =0;

void setup()
{
  interrupts();
  pinMode(LED1,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(btn), btnPress, RISING);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(btn);
  digitalWrite(LED1,HIGH);
  delay(tiemp);
  digitalWrite(LED1,LOW);
  delay(tiemp);
}

void btnPress(){
  counter = counter+1;
  Serial.println(counter);
}
