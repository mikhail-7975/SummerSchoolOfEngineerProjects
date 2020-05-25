void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PC13, OUTPUT);
  digitalWrite(PC13, LOW);
}

int delayTime = 100;
char inp;

void loop() {
  
  
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    inp = Serial.read();
    if (inp == 'o') 
      delayTime = 20;
    else if (inp == 'c')
      delayTime = 100;
    else
      delayTime = 0; 
    }
  
    digitalWrite(PC13, HIGH);
    delay(delayTime);
    digitalWrite(PC13, LOW);
    delay(delayTime);
}
