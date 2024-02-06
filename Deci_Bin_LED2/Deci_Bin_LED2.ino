int number1 = 3;
int number2 = 5;
int sum;
int binary_num = 0;
int i = 1;
//int remainder;


void setup() {
  // put your setup code here, to run once:
}

// put your main code here, to run repeatedly:
int main() {


  printf("Enter two intergers: ");
  scanf("%d %d", &number1, &number2);

  //calculate the sum
  sum = number1 + number2;

  printf("%d + %d = %d", number1, number2, sum);
  printf("The decimal number is: %d\n", sum);

  while (sum != 0) {
    int remainder = sum % 2;
    sum /= 2;
    binary_num += remainder * i;
    i *= 10;
  }

  printf("Binary number: %d\n", binary_num);

  // Displaying binary number using LEDs
  int temp = binary_num;
  int j = 0;
  while (temp > 0) {
    int bit = temp % 10;
    // Turn on the LED if the binary digit is 1
    if (bit == 1)
      digitalWrite(j, HIGH);
    // Turn off LED if the binary digit is 0
    else
      digitalWrite(j, LOW);

    temp /= 10;
    j++;
  }

  // Delay for 1 second
  delay(1000);

  return 0;
}
