


#include <AFMotor.h>

AF_Stepper motor1(200,1);
AF_Stepper motor2(200,2);
int potenciometer1 = A0;
int potenciometer2 = A1;
int botao = 24;//Cria a variavel botao no pino digital 18

int value1 = 0;
int value2 = 0;
int value3 = 0;//cria a variavel value3 = 0 para o botao

void setup (){
  Serial.begin(9600);
  Serial.println ("Teste Motores!");
  pinMode (potenciometer1, INPUT);
  pinMode (potenciometer2, INPUT);
  pinMode (botao, INPUT);//Define o Botao como INPUT
  digitalWrite (botao, HIGH);//Define estado HIGH
  motor1.setSpeed(0);
  motor2.setSpeed(0);
}

 void loop(){
  value1 = analogRead (potenciometer1);
  value2 = analogRead (potenciometer2);
  value3 = digitalRead (botao);

  if (value1 < 500){
    motor1.setSpeed (25);//Velocidade do motor
    motor1.step(10, FORWARD,MICROSTEP);
  }
  else if (value1 > 600){
    motor1.setSpeed (25);//Velocidade do motor
    motor1.step(10, BACKWARD, MICROSTEP);
  }
  else{
    motor1.setSpeed(0);
    motor1.step (0, BACKWARD, MICROSTEP);
    motor1.release();
  }
  if (value2 < 500){
    motor2.setSpeed (25);//Velocidade do motor
    motor2.step (10, FORWARD, MICROSTEP);
  }
  else if(value2 > 600){
    motor2.setSpeed(25);//Velocidade do motor
    motor2.step (10, BACKWARD,MICROSTEP);
  }
  else{
    motor2.setSpeed(0);
    motor2.step (0, BACKWARD, MICROSTEP);
    motor2.release();
  }
  if (value3 == LOW) {
    digitalWrite (botao, HIGH);
      motor1.setSpeed(255);//Velocidade do motor
      motor1.step (10, BACKWARD, MICROSTEP);
      motor1.release();
      motor2.setSpeed(255);//Velocidade do motor
      motor2.step (0, BACKWARD, MICROSTEP);
      motor2.release();
  }
}
