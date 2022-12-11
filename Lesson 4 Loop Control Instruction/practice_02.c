//write a program to print multiplication table of 10 in reversed order,



#include<stdio.h> 

int main(){ 
int i;
for(i=10; i; i--){
    printf("10 X %d = %d\n", i, i*10);
}
     
return 0;
}