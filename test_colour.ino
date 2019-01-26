String comdata = "";
int red,green,blue;
const int Red = 3;
const int Green = 4;
const int Blue =2;
void setup() {
  Serial.begin(9600);
  while(Serial.read()>= 0){}
  delay(50);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  while (Serial.available() > 0)
  {
    comdata = Serial.readString();
    delay(30);
    red=comdata.substring(0,3).toInt();
    green=comdata.substring(4,7).toInt();
    blue=comdata.substring(8,11).toInt();
    Serial.println(comdata);
    delay(20);
    comdata = "";
  }
  digitalWrite(5,0);
  colour(red,green,blue);
}
