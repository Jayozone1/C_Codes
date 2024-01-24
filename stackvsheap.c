#include <stdio.h>
//funtion: swap two numbers using pointers
void swap(int *x, int *y)
{
    int j;
     j  = *x;
     *x = *y;
     *y = j;
}
int main() {
    // Write C code here
    int dog, cat;
    printf("Enter value of dog: ");
    scanf("%d", &dog);
    printf("Enter value of cat: ");
    scanf("%d", &cat);
    //Print values before swap
    printf("Values before swap: dog=%d, cat=%d\n", dog,cat);
    //call function by passing addresses
    swap(&dog,&cat);
    //print calues after swap
    printf("Values after swap: dog=%d, cat=%d\n", dog,cat);
    return 0;
}