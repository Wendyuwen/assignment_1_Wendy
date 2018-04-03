int Led=7;
int titleSensor=A2;
int val;
int LEDstate = HIGH;
void setup(){
  Serial.begin(9600);
  pinMode(Led, OUTPUT);           
  pinMode(titleSensor, INPUT);
  digitalWrite(Led, LOW);
}
void loop(){
 if(digitalRead(titleSensor)>100){
    digitalWrite(Led,HIGH);
    Serial.println(titleSensor);
  }else{
    digitalWrite(Led,LOW);
  }
}
