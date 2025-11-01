#include <stdio.h>

int main() {
    int firstnumber, secondnumber;
    printf("enter first number\n");
    scanf("%d", &firstnumber);

    printf("entersecond number\n");
    scanf("%d", &secondnumber);

    if(firstnumber>secondnumber){
     printf("the subtraction of two number is %d", firstnumber - secondnumber);
    }
    else{
         printf("the subtraction of two number is %d", secondnumber - firstnumber);
    }
    return 0;
}