// Write a program to create an array of 10 integers and store a multiplication table of a general input provided by the user using scanf();
#include<stdio.h> 

int main(){ 

     int mul[10];
     int n;
     printf("write the value of n\n");
     scanf("%d", &n);
     mul[0] = n;
     
     int *ptr = mul;
     printf("The table of %d is\n", n);
     
     for( int i = 0; i<10; i++){
        mul[i] = mul[0]*(i+1);
     
     
     
         for(int i =0; i<10; i++){
         printf("%d X %d = %d\n",n, i+1, mul[i] );

     }}
return 0;
}