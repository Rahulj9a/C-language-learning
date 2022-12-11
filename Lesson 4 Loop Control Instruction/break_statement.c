//the break statement is used to exit the loop irrespective of whether the conditiion is true or false.
//whenever a "break" is encountered inside the loop, the control is sent outside the loop.
// can be used in any loop



#include<stdio.h> 

int main(){ 

     int i = 0;

     do{
         printf("The value of i is %d\n", i);
         if (i==4){
             break;
             
             
         }
         i++;


     }while(i<10);
return 0;
}