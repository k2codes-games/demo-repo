#include <stdio.h>

int main() {
     int firstnumber, secondnumber;
    printf("enter the first number\n");
    scanf("%d", & firstnumber);

    printf("enter the second number\n");
    scanf("%d", & secondnumber);
    if(secondnumber == 0){
        printf("Error:, Division by zero is not allowed.\n");
    }
    else{
        int result = firstnumber / secondnumber;
        printf("The result of division is%d.\n", result);
    }
    return 0;
}