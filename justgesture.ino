#include <Servo.h>  // add servo library

Servo myservo1;  // create servo object to control a servo
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 

int potpin1 = 0;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin
int potpin2 = 1;  // analog pin used to connect the potentiometer
int val2; 
int potpin3 = 3;  // analog pin used to connect the potentiometer
int val3; 
int potpin4 = 2;  // analog pin used to connect the potentiometer
int val4; 

void setup() {
  myservo1.attach(7);
  myservo2.attach(9);
  myservo3.attach(11);
  myservo4.attach(13);  // attaches the servo on pin 9 to the servo object
}

void loop() {

  //111111111111111111111111111
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 600, 180, 0);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value
  delay(15);  

  //222222222222222222222222222
  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 0, 600, 180, 0);     // scale it to use it with the servo (value between 0 and 180)
  myservo2.write(val2);                  // sets the servo position according to the scaled value
  delay(15);

  //333333333333333333333333333
  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val3, 600, 0, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo3.write(val3);                  // sets the servo position according to the scaled value
  delay(15);

  //444444444444444444444444444
  val4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023)
  val4 = map(val4, 0, 600, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo4.write(val4);                  // sets the servo position according to the scaled value
  delay(15);                     // waits for the servo to get there
}
