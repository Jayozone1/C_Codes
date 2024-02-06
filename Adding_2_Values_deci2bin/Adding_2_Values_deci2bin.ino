#include <Arduino.h>
//Add two numbers and display the output in binary and implement that on LED.
int num_1 = 23;
int num_2 = 13;// Create a Function that accepts two numbers, 
int starter = 0;
char buffer[100];
int sum;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  //Serial.print("Hello World");
  sum = num_1 + num_2;
  sprintf("The value of sum %d \n", sum);
  printf("Binary representation of %d \n", sum);
  printBinary();
  printf("\n");
 
 }

void loop() {
  // put your main code here, to run repeatedly:

}

void printBinary(){
          for (int x = starter; x <= sum; x++)//not needed. Just output the value of the sum {
            sprintf(buffer, "value of %d ---", x);
            Serial.print(buffer);
            sprintf("Value of %d --", x);
            for (int i = 3; i >= 0; i--) {
              int bit = (x >> i) & 1;
              sprintf( buffer, "%d", bit);
              digitalWrite(pin2 + i, bit);
              Serial.print(buffer);
            }
              sprintf(buffer, "\n");
              Serial.print(buffer);
              delay(1000);
          }

//i. 

  
}
