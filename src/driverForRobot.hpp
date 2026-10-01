#pragma once
#include <Arduino.h>
void MotorDriverBegin(int pin1, int pin2, int pin3, int pin4)
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}
void forward(int pin1, int pin2, int pin3, int pin4)
{
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
}
void backward(int pin1, int pin2, int pin3, int pin4)
{
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
}
void left(int pin1,int pin2,int pin3,int pin4)
{
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
}
void right(int pin1, int pin2, int pin3, int pin4)
{
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
}