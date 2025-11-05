#include <stdio.h>

int main() {
    int firstnumber, secondnumber;
    printf("enter the first number\n");
    scanf("%d", & firstnumber);

    printf("enter the second number\n");
    scanf("%d", & secondnumber);

    int product = firstnumber * secondnumber;
    printf("The product of the numbers is %d\n", product);
    return 0;
}