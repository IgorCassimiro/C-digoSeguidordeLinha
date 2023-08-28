#include <ESP32Servo.h> 
#define pinIR_D 23 
#define pinIR_E 35  
 
bool IR_D, IR_E;  
Servo Roda_Direita; Servo Roda_Esquerda;
int servoPin_D = 15; int servoPin_E = 12; 


void setup() { 
  Serial.begin(115200); 
  Roda_Direita.attach(servoPin_D);  
  Roda_Esquerda.attach(servoPin_E); 
  pinMode(pinIR_D, INPUT);  
  pinMode(pinIR_E, INPUT);  
} 
void loop() { 
  IR_D = digitalRead(pinIR_D);  
  IR_E = digitalRead(pinIR_E); 
   if(!IR_E && !IR_D){ // frente com fita  
     Roda_Direita.write(85); 
     Roda_Esquerda.write(95); 
  } 
  if(IR_D){ //Sentido horário 
      Roda_Direita.write(92); 
      Roda_Esquerda.write(94); 
   }     
   if(IR_E){ //Sentido anti-horário 
      Roda_Direita.write(85); 
      Roda_Esquerda.write(89); 
   } 
  delay(60); 
}
