//Write a program to print the value of a varible i by using pointer to pointer type of variable;
#include<stdio.h> 



int main(){ 
    int a = 7;
    int *b = &a;
    int **c = &b;
    printf("The value of i is %d\n", **c);

     
return 0;
}