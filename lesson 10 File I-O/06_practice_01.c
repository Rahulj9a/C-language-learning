// Write a program to read three integers d=from a file;
#include<stdio.h> 

int main(){ 


     FILE *ptr;
     int a, b, c;

     ptr = fopen("06_pr_01.txt", "r");
     fscanf(ptr, "%d %d %d", &a, &b, &c);

     printf("The value of a, b and c is %d, %d and %d ", a,b,c);
     

return 0;
}