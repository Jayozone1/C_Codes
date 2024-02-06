#include <stdio.h>

int num = 15;
int starter = 0;
// Online C compiler to run C program online
void printBinary() {
    for (int x = starter; x <= num; x++) {
    printf(" value of %d --- ", x);
    for (int i = 3; i >= 0; i--) {
        int bit = (x >> i) & 1;
        printf("%d", bit);
    }
        printf("\n");
    }
}

int main() {
    printf("Binary representation of %d - %d \n",starter, num);
    printBinary();
    printf("\n");

    return 0;
}