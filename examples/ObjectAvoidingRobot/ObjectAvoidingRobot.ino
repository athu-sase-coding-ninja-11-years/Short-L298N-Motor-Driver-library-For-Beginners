#include <driverForRobot.hpp>
int ir = YourIRSensorPin;
int status = 0;
void setup() {
  // put your setup code here, to run once:
  MotorDriverBegin(IN1, IN2, IN3, IN4);
  pinMode(ir, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  status = digitalRead(ir);
  if (status == 1) {
    left(IN1, IN2, IN3, IN4);
    //it turns left if object is detected
  } else {
    forward(IN1, IN2, IN3, IN4);
  }
}
