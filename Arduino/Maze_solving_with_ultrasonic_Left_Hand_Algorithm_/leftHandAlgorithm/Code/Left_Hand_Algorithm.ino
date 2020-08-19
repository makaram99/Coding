//Maze solving Robot;
// Mahmoud Karam
//Phone: 0101884651;
/*
right motor with channel 1
left motor with channel 2

distance = speed*time 
measure distance in cm
pulseIn measure time in us
sound speed 340m/s = 0.034cm/us

distance happens in half of travelling time
  travel time = go time + back time
*/

#define vel_motor_right 10 
#define vel_motor_left 11 
#define e1 8  //Enable1
#define e2 9  //Enable2
#define d1 12 //direction1(i/p1) 
#define d2 7  //direction2 (i/p2)
int trigger_front = A4; // front trigger
int echo_front = A5; // front echo
int trigger_right = A2;
int echo_right = A3; 
int trigger_left = A0;
int echo_left = A1;

void setup()
{
  //Front sensor
  pinMode(trigger_front, OUTPUT); 
  pinMode(echo_front, INPUT);
  //right sensor
  pinMode(trigger_right, OUTPUT);
  pinMode(echo_right, INPUT); 
  //Left sensor
  pinMode(trigger_left, OUTPUT);
  pinMode(echo_left, INPUT);
  //PWM
  pinMode(vel_motor_right, OUTPUT);
  pinMode(vel_motor_left, OUTPUT);
  //Enables of drivers
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);
  //I/P of drivers
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT); 
  delay(5000);  //Preparing everything
}

void loop()
{
  long front_time, right_time, left_time, left, right, front;
  
  //using front sensor
  digitalWrite(trigger_front, LOW); //preparing sensor
  delayMicroseconds(2); 
  digitalWrite(trigger_front, HIGH); //triggering ultrasound waves
  delayMicroseconds(5); 
  digitalWrite(trigger_front, LOW);
  
  front_time = pulseIn(echo_front, HIGH); //calculating travelling time
  front = front_time/29/2 //calculating front distance
  
  //using right sensor
  digitalWrite(trigger_right, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigger_right, HIGH);  
  delayMicroseconds(5);
  digitalWrite(trigger_right, LOW);
  
  right_time = pulseIn(echo_right, HIGH); 
  right = right_time/29/2;  
  
  //using left sensor
  digitalWrite(trigger_left, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigger_left, HIGH);  
  delayMicroseconds(5);
  digitalWrite(trigger_left, LOW);
  
  left_time = pulseIn(echo_left, HIGH); 
  left = left_time/29/2;  
  
  //Stopping all motors
  analogWrite(vel_motor_right, 0); 
  analogWrite(vel_motor_left, 0); 
  analogWrite(e1, 0); 
  analogWrite(e2, 0); 
  analogWrite(d1, 0); 
  analogWrite(d2, 0); 
  
  if(front >8)
  { 
    if(left >7 && left< 13) //between 7 & 13 cm
    {
      analogWrite(vel_motor_right, 120);
      analogWrite(vel_motor_left, 150);
      analogWrite(e1, 255);
      analogWrite(e2, 0);
      analogWrite(d1, 0);
      analogWrite(d2, 255); 
    }
    if(left >=13) 
    {
      analogWrite(vel_motor_right, 255);
      analogWrite(vel_motor_left, 60);
      analogWrite(e1, 255);
      analogWrite(e2, 0);
      analogWrite(d1, 0);
      analogWrite(d2, 255); 
    }
    if(left <=7) 
    {
      analogWrite(vel_motor_right, 60);
      analogWrite(vel_motor_left, 255);
      analogWrite(e1, 255);
      analogWrite(e2, 0);
      analogWrite(d1, 0);
      analogWrite(d2, 255); 
    } 
  }
  
  if(right <=20 && left>20 && front <=8) 
    turn_left(); 
  if(right >20 && left>20 && front <=8) 
    turn_left();
  if(left <=20 && right>20 && front <=8) 
    turn_right();
  if(left<=20 && right<=20 && front<=8) 
    rotate();
}

void turn_right()
{
  analogWrite(vel_motor_right, 120);
  analogWrite(vel_motor_left, 120);
  analogWrite(e1, 0);
  analogWrite(e2, 255);
  analogWrite(d1, 0);
  analogWrite(d2, 255);
  delay(700); 
  
}

void turn_left()
{
  analogWrite(vel_motor_right, 120);
  analogWrite(vel_motor_left, 120);
  analogWrite(e1, 255);
  analogWrite(e2, 0);
  analogWrite(d1, 255);
  analogWrite(d2, 0); 
  delay(800);
}

void rotate()
{
  analogWrite(vel_motor_right, 120);
  analogWrite(vel_motor_left, 120);
  analogWrite(e1, 255);
  analogWrite(e2, 0);
  analogWrite(d1, 255);
  analogWrite(d2, 0);
  delay(1200);
}
