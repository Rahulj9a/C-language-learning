//write a program to check whether a given number is prime or not , using loops;
//prime number is a natural no grater than 1 that is not a product of 2 smaller natural numbers;
//This is not the best method to find 

#include<stdio.h> 

int main(){ 

     int n;
     int i;
     int prime = 0;
     
     printf("write a number you want to check (prime or not)\n");
     scanf("%d", &n);
     
     
     for(i=2; i<n; i++){
         if(n%i ==0){
             prime = 1;
              
             break;
         } 
         

     }
     if (prime == 1){
         printf("%d is not a prime number", n);
     }
     else{
         printf("%d is a prime number", n);
     }



return 0;
}