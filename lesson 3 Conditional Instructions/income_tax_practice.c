#include<stdio.h> 

int main(){ 

     float tax = 0, income;
     printf("Enter your income\n");
     scanf("%f", &income);
     if(income>=250000 && income<=500000){
         tax = tax + 0.05 * (income - 250000);
    }
     else if (income>=500001 && income<=1000000){
         tax = tax + 0.2 * (income - 500000);
     }
     
     
     else if (income>=1000001){
         tax = tax + 0.3 * (income - 1000000);
     }
     printf("your net income tax is %f\n", tax);
        
     
    
return 0;
}