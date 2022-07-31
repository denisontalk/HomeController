#include <AFMotor.h>

AF_Stepper motor1(200,1);
AF_Stepper motor2(200,2);
int analogPin0 = A0;
int analogPin1 = A1;
int analogPin2 = A2;//Cria a variavel potenciometro no pino analogico 1

int value1 = 0;
int value2 = 0;
int value3 = 0;//cria a variavel value3 = 0 para o potenciometro
int speed1 = 0;

void setup (){
  Serial.begin(9600);
  Serial.println ("Teste Motores!");
  pinMode (analogPin0, INPUT);
  pinMode (analogPin1, INPUT);
  pinMode (analogPin2, INPUT);//Define o Botao como INPUT
  motor1.setSpeed(0);
  motor2.setSpeed(0);
}

 void loop(){
  value1 = analogRead (analogPin0);
  value2 = analogRead (analogPin1);
  value3 = analogRead (analogPin2);

  if (value3 <= 30){
    speed1 = 1;
  }
  else if (value3 > 30 && value3 < 60) {
    speed1 = 3;
  }
  else if (value3 > 60 && value3 < 90) {
    speed1 = 4;
  }
    else if (value3 > 90 && value3 < 120) {
    speed1 = 5;
  }
  else if (value3 > 120 && value3 < 150) {
    speed1 = 6;
  }
    else if (value3 > 150 && value3 < 210) {
    speed1 = 7;
  }
  else if (value3 > 210 && value3 < 270) {
    speed1 = 8;
  }
    else if (value3 > 270 && value3 < 320) {
    speed1 = 9;
  }
  else if (value3 > 320 && value3 < 390) {
    speed1 = 8;
  }
  else if (value3 > 390 && value3 < 440) {
    speed1 = 9;
  }
  else if (value3 > 480 && value3 < 530) {
    speed1 = 9;
  }
  else if (value3 > 530 && value3 < 600) {
    speed1 = 10;
  }
  else if (value3 > 600 && value3 < 660) {
    speed1 = 11;
  }
  else if (value3 > 660 && value3 < 710) {
    speed1 = 12;
  }
  else if (value3 > 710 && value3 < 780) {
    speed1 = 13;
  }
  else if (value3 > 780 && value3 < 840) {
    speed1 = 14;
  }
  else if (value3 > 840 && value3 < 900) {
    speed1 = 15;
  }
  else if (value3 > 900 && value3 < 950) {
    speed1 = 16;
  }
  else if (value3 > 950 && value3 < 1000) {
    speed1 = 17;
  }
  else if (value3 > 1000){
    speed1 = 18;
  }

  

  if (value1 < 50){
    motor1.setSpeed (speed1);
    motor1.step(1,FORWARD,INTERLEAVE);
    Serial.println (value1);
    Serial.println ("IF-1-1");
    Serial.println (speed1);
  }
  else if (value1 > 1000){
    motor1.setSpeed (speed1);
    motor1.step(1,BACKWARD,INTERLEAVE);
    Serial.println (value1);
    Serial.println ("IF-1-2");
    Serial.println (speed1);
  }
  else{
    //motor1.release();
  }
  if (value2 < 50){
    motor2.setSpeed (speed1);
    motor2.step (1,BACKWARD,INTERLEAVE);
    Serial.println (value2);
    Serial.println ("IF-2-1");
    Serial.println (speed1);
  }
  else if(value2 > 1000){
    motor2.setSpeed(speed1);
    motor2.step (1,FORWARD,INTERLEAVE);
    Serial.println (value2);
    Serial.println ("IF-2-2");
    Serial.println (speed1);
  }
  else{
   //motor2.release();
  }
}
