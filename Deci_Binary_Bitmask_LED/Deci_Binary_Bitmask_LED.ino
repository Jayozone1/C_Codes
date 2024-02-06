int num = 15;
int starter = 0;
char buffer[100];
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;


void setup() {
  // put your setup code here, to run once:
    // For a four-digit binary, we need 2 bytes (16 bits)
    Serial.begin(9600);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    Serial.print("Hello World");
    sprintf( buffer, "Binary representation of %d - %d \n",starter, num);
    Serial.print(buffer);
    printBinary();
    printf("\n");


}
void loop() {
  
}
void printBinary() {
    for (int x = starter; x <= num; x++) {
    sprintf( buffer, " value of %d --- ", x);
    Serial.print(buffer);
    //for (int i = 0; i <= 3; i++) 
    for (int i = 3; i >= 0; i--){
        int bit = (x >> i) & 1;
        sprintf( buffer, "%d", bit);
        //digitalWrite(5-i, bit);
        //digitalWrite(i-4, bit);
       digitalWrite(pin2 + i , bit);
        Serial.print(buffer);
        
    }
        sprintf(buffer, "\n");
        Serial.print(buffer);
        delay(1000);
    }
}
