// Write a program having a  variable i. Print the address of i. Pass this variable to a function and print
//its address. Are these addresses same? Why?
#include<stdio.h> 

void function_01(int i){
    printf("The address of variable i during function_01 is %u\n", &i);
}

int main(){ 

     int i = 4;
     printf("The address of i is %u\n", &i);
     function_01(i);
     printf("The address of i after function_01 i.e in main is %u\n", &i);// The address is different bcoz you have pass value not address

return 0;// So the address of i will same to the address of function_01 function

}

//