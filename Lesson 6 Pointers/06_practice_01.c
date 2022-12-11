// write a program to print the address of a variable. Use this address to get the value of this variable
#include<stdio.h> 

int main(){ 

     int a = 6, *b;
     b= &a;
     printf("The address of variable a is %u\n", &a);
     printf("The value of varible a is %d\n", *b);
return 0;
}