#include <AccelStepper.h>
#include <AFMotor.h>

AF_Stepper motor1(200,1);
AF_Stepper motor2(200,2);

int analogPin0 = A0; //Analogico
int analogPin1 = A1; //Analogico
int analogPin2 = A2; //Potenciometro Velocidade

int value1 = 0; //Valor padrão value1 Analogico
int value2 = 0; //Valor Padrão value2 Analogico
int value3 = 0; //Valor Padrão Value3 Potenciometro
int speed1 = 0; //Valor Padrão Velociade

// you can change these to DOUBLE or INTERLEAVE or MICROSTEP!
void forwardstep1() {  
  motor1.onestep(FORWARD, SINGLE);
}
void backwardstep1() {  
  motor1.onestep(BACKWARD, SINGLE);
}
// wrappers for the second motor!
void forwardstep2() {  
  motor2.onestep(FORWARD, SINGLE);
}
void backwardstep2() {  
  motor2.onestep(BACKWARD, SINGLE);
}

// Motor Shield has two motor ports, now we'll wrap them in an AccelStepper object
AccelStepper stepper1(forwardstep1, backwardstep1);
AccelStepper stepper2(forwardstep2, backwardstep2);

void setup (){
  Serial.begin(9600);
  Serial.println ("Teste Motores!");
  stepper1.setMaxSpeed(480);
  stepper2.setMaxSpeed(480);
  pinMode (analogPin0, INPUT);//Analogico 0 como INPUT
  pinMode (analogPin1, INPUT);//Aalogico 1 como INPUT
  pinMode (analogPin2, INPUT);//Analogico 2 como INPUT potenciometro

}

 void loop(){
  value1 = analogRead (analogPin0); //Atribui valor do Analogico 0 ao value1
  value2 = analogRead (analogPin1); //Atribui valor do Analogico 1 ao value2
  value3 = analogRead (analogPin2); //atribui valor do Potenciometro ao Value3

/*
Definição de velocidade a variavel speed1
------------------------------------------------------------------------------------------------------
*/
 if (value3 <= 30){
    speed1 = 1;
  }
  else if (value3 > 30 && value3 < 60) {
    speed1 = 2;
  }
  else if (value3 > 60 && value3 < 90) {
    speed1 = 3;
  }
    else if (value3 > 90 && value3 < 120) {
    speed1 = 4;
  }
  else if (value3 > 120 && value3 < 150) {
    speed1 = 5;
  }
    else if (value3 > 150 && value3 < 210) {
    speed1 = 6;
  }
  else if (value3 > 210 && value3 < 270) {
    speed1 = 7;
  }
    else if (value3 > 270 && value3 < 320) {
    speed1 = 8;
  }
  else if (value3 > 320 && value3 < 390) {
    speed1 = 9;
  }
  else if (value3 > 390 && value3 < 440) {
    speed1 = 10;
  }
  else if (value3 > 480 && value3 < 530) {
    speed1 = 11;
  }
  else if (value3 > 530 && value3 < 600) {
    speed1 = 12;
  }
  else if (value3 > 600 && value3 < 660) {
    speed1 = 13;
  }
  else if (value3 > 660 && value3 < 710) {
    speed1 = 14;
  }
  else if (value3 > 710 && value3 < 780) {
    speed1 = 15;
  }
  else if (value3 > 780 && value3 < 840) {
    speed1 = 16;
  }
  else if (value3 > 840 && value3 < 900) {
    speed1 = 17;
  }
  else if (value3 > 900 && value3 < 950) {
    speed1 = 18;
  }
  else if (value3 > 950 && value3 < 1000) {
    speed1 = 19;
  }
  else if (value3 > 1000){
    speed1 = 20;
  }
/*  
----------------------------------------------------------------------------------------------  
Definição de comandos
*/

  if (value1 < 50){

    stepper1.setSpeed(speed1);
    stepper1.runSpeed();
//    Serial.println (value1);
    Serial.println ("IF-1-1");
    Serial.println (speed1);
  }
  else if (value1 > 1000){
    
    stepper1.setSpeed(-speed1);
    stepper1.runSpeed();
    Serial.println (value1);
    Serial.println ("IF-1-2");
    Serial.println (speed1);
 }
 
  else{
   //motor1.release();
   //Serial.println ("else-1");
  }


 if (value1 < 50){

    stepper2.setSpeed(speed1);
    stepper2.runSpeed();
    Serial.println (value1);
    Serial.println ("IF-1-1");
    Serial.println (speed1);
  }
  
  else if (value2 > 1000){
    
    stepper2.setSpeed(-speed1);
    stepper2.runSpeed();
    Serial.println (value2);
    Serial.println ("IF-2-2");
    Serial.println (speed1);
  }
  
  else{
    //motor1.release();
    //Serial.println ("else-2");
  }
}
