//author=athu sase 11 years old boy
#include <driverForRobot.hpp>
//here we include our library
void setup() {
  // put your setup code here, to run once:
  MotorDriverBegin(IN1, IN2, IN3, IN4);
  //here we begin our library
  //IN1,IN2,IN3,IN4 with our motor driver pins
  //example=MotorDriverBegin(2,3,4,5);
  //2=IN1,3=IN2,4=IN3,5=IN4
}

void loop() {
  // put your main code here, to run repeatedly:
  forward(IN1, IN2, IN3, IN4);
  //it goes forward
  delay(2000);
  backward(IN1, IN2, IN3, IN4);
  //it goes backward
  delay(2000);

  left(IN1, IN2, IN3, IN4);
  //it goes left
  delay(2000);

  right(IN1, IN2, IN3, IN4);
  //it goes right
  delay(2000);
}
