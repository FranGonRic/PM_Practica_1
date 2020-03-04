const int LED1 = 10;
const int btn = 12;

int buttonState = 0;
int tiemp = 500;
int counter =0;

void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  attachInterrupt(btn, count, CHANGE);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(btn);
  Serial.println(counter);
  digitalWrite(LED1,HIGH);
  delay(tiemp);
  digitalWrite(LED1,LOW);
  delay(tiemp);
}

void count(){
  counter = counter+1;
  Serial.println(counter);
}
