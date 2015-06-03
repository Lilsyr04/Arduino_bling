void setup() {
  // put your setup code here, to run once:
  pinMode(17, OUTPUT);
  delay(11000);
  
}

void loop(){
  // put your main code here, to run repeatedly:
  int count = 0;
  while(count<17){
    digitalWrite(17, HIGH);
    delay(1000);
    digitalWrite(17, LOW);
    delay(1000);
    count++;}
  delay(10000);
}

