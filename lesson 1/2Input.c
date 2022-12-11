#include <stdio.h>

int main(){
    int a, b;

    printf("enter the value of a \n");
    scanf("%d", &a);
    // herer & means address of a, '&' is very important in the scanf adress is provided later


    printf("enter the value of b \n");
    scanf("%d", &b);

    printf("the sum of a and b is %d \n", a + b);
    printf("the difference between a and b is %d \n", a - b);
    printf("the product of a and b is %d \n", a * b);
    
    return 0;
}