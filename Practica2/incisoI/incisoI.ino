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

  cli();
  DDRD &= ~(1 << DDD1);
  PORTD |= (1 << PORTD1);
  EICRA |= (1 << ISC10);
  EIMSK |= (1 << INT1);
  sei();
  
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
