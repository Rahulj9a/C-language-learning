//Write a program to create an array of 10 integers and store a multiplication table of 5 in it using pointer

#include<stdio.h> 

int main(){ 

     int arr[10];
     
     int *ptr;
     ptr = arr;
     int n;
     printf("write the value of n\n");
     scanf("%d", &n);
     arr[0] = n;

     
    
     printf("The table of %d is\n", n);
     for(int i=0; i<10; i++){
         printf("%d X %d = %d\n", n,i+1, *ptr);
         *ptr += n;
     }
return 0;
}