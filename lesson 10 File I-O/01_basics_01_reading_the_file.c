#include<stdio.h> 

int main(){ 

     FILE *ptr;
     int num;
     int num2;
     ptr = fopen("Rahul.txt","r");
     // Now if we want to take a no. from rahul.txt file then we will have to use fscanf;
     fscanf(ptr, "%d", &num);
     printf("The value of num is %d\n", num);
     // Now if we want to take second no. written n txt file then we will do 
     fscanf(ptr, "%d", &num2);
     printf("The value of num2 is %d\n", num2);

return 0;
}