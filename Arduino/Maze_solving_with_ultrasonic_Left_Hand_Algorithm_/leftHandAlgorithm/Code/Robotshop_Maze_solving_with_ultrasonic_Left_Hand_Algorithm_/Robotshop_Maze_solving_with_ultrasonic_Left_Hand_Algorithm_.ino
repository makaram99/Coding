/*Mahmoud Karam, FEE, 02/22/2020
01018894651

Maze solving robot
left wall follower algorithm

distance = speed*time 
measure distance in cm
pulseIn measure time in us
sound speed 340m/s = 0.034cm/us

distance happens in half of travelling time
  travel time = go time + back time
*/

const byte in1=13;
const byte in2=12;
const byte in3=11;
const byte in4=10;

const byte enA=9;
const byte enB=8;

const byte right_trig = 0;
const byte right_echo = 1;
const byte left_trig = 2;
const byte left_echo = 3;
const byte front_trig = 4;
const byte front_echo = 5;

void setup()
{
  for(byte i = 8; i<=13; i++) //enable and i/p pins of driver
    pinMode(i,OUTPUT);
  for(byte i = 0; i<=4; i+=2) //trigger pins
    pinMode(i,OUTPUT);
  for(byte i = 1; i<=5; i+=2) //echo pins
    pinMode(i,OUTPUT);
}
void forward()
{
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  delay(10);
}

void backward()
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
  delay(10);
}

void right()
{
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
  delay(10);
}

void left()
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  delay(10);
}

int distance(byte trig, byte echo)
{
  long time;
  int cm;
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);

  time=pulseIn(echo,HIGH);
  cm = (time*0.034)/2;
  return cm;
}

void loop()
{
  byte left_distance, front_distance, right_distance;
  analogWrite(enA,150);
  analogWrite(enB,150);
  
  left_distance = distance(left_trig, left_echo);
  while(distance(left_trig, left_echo)>15)
    left();
  
  front_distance = distance(front_trig, front_echo);
  while(right_distance>15)
    forward();

  right_distance = distance(right_trig, right_echo);
  while(right_distance>15)
    right();

  while((right_distance<15) && (front_distance<15) && (left_distance<15))
    backward();
}
