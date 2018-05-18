int Button = 0;

void setup() {

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  
  for(int thisPin = 3; thisPin <= 5; thisPin++){
    digitalWrite(thisPin, HIGH);
    delay(500);
    digitalWrite(thisPin, LOW);
    delay(500);
  }
  
}
