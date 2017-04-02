//UL.ino

#define TRIG 2
#define ECHO 3
int red= 11;
int green = 10;
int blue = 9;


void setup(){
  Serial.begin(9600);
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);

pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}
void loop(){

digitalWrite(TRIG, LOW);
delayMicroseconds(2);
digitalWrite(TRIG, HIGH);
delayMicroseconds(10);
digitalWrite(TRIG, LOW);
long distance = pulseIn(ECHO, HIGH)/58.2;

digitalWrite(red, 0);
digitalWrite(green, 0);
digitalWrite(blue, 0);

if(distance < 10){
    digitalWrite(red, 255);
}else if(distance < 20){
    digitalWrite(green, 255);
}else if(distance < 30){
    digitalWrite(blue, 255);
}
Serial.print(distance);
Serial.println(" cm");
delay(100);
}
