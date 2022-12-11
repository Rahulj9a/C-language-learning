//write a program to calculate the factorial of a given number using a "for loop"


#include<stdio.h> 

int main(){
    int i = 0, n;
    int factorial = 1;
    printf("write the number you want of factorial\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        factorial *=i;

    }printf("The value of factorial of %d is %d\n", n, factorial);


     
return 0;
}