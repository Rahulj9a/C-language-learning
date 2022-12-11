//write a program to calculate the sum of the numbers occuring in the multiplication table of 8



#include<stdio.h> 

int main(){ 
    int i =1;
    int sum = 0;
    printf("the table of 8 is \n");
    for (i = 1;i<=10; i++){
       printf(" %d\n", 8*i);
       sum += i*8;
        }printf("and the sum is %d\n", sum);

     
return 0;
}