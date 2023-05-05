int sensorValue=0;
int ledDimming=0;
int pwmPin=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(pwmPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
  if(sensorValue>550){
    sensorValue=550;
  }
  else if(sensorValue<16){
    sensorValue=16;
  }
  int ledBlink=map(sensorValue, 16, 550, 0, 255);
  analogWrite(9,ledBlink);
}
