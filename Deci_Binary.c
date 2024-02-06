#include <stdio.h>

int main()
{

	int number1, number2, sum, binary_num = 0, i = 1, remainder;

//scanf("%d %d", &number1, &number2);
	
	printf("Enter first integers: \n");
	scanf("%d",  &number1);
	printf("Enter second integers: \n");
	scanf("%d",  &number2);

	//calculate the sum
	sum = number1 + number2;

	printf("%d + %d = %d\n", number1, number2, sum);
	printf("The decimal number is: %d\n", sum);
	//scanf("%d", &sum);
	while (sum != 0)  {
	     remainder = sum % 2;
	     sum /= 2;
	     binary_num += remainder * i;
	     i *= 10;
	}
	printf("Binary number: %d\n", binary_num);
	
	return 0;
}
