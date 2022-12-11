#include<stdio.h> 

int main(){ 

     int age;
     printf("Enter your age\n");
     scanf("%d", &age);
     if(age<90 && age>=18){      // here "&& is a logical operator to represent "and"
         printf("You are above 18 and below 90 , you can drive\n");
     }
     else{
         printf("You cannot drive\n");
     }
return 0;
}