// c is a langiage with some fixed rules of programming, e.g : changing the size of an array is not allowed
//Dynamic memory allocation is a way to allocate memory to a data structure during RUNTIME.
//we can use DMA function available in C to allocate and free memory during runtime.

//Funtions availablein C to perform dynamic memory allocation:
//1.) malloc()  -->stands for memory allocation. It takes number of butes to be allocated as an input and returns a pointer of type void.

#include<stdio.h> 
#include<stdlib.h>

int main(){ 

     int *ptr;
     // ptr = malloc(6*4);  // 6*4 means 6 integers and 4 stands for bytes as we know an integers takes 4 bytes.
     // but as we all know memory used by an intgers vary from system to system; so we will do

     ptr = (int *)malloc(6 * sizeof(int));  
     //will alocate space for 6 integer as ptr is also an int pointer;
     // --> sizeof(int) -- > will tell us size of integer in system;
     // Now as we know that malloc will return a void ptr but we need an int one so will do-->
     
     
     //Now to check the size, we can do-->
    /*  printf("The size of int in my pc is %d bytes\n", sizeof(int));
     printf("The size of float in my pc is %d bytes\n", sizeof(float));
     printf("The size of char in my pc is %d byte\n", sizeof(char)); // 1 bytes = 8 bit;
      */

     for(int i =0; i<6; i++){
         printf("Enter the value of %d element", i+1);
         scanf("%d", &ptr[i]);
     }

     for(int i  =0; i<6; i++){
         printf("The value of element %d is %d", i+1, ptr[i]);
     }
     
     //after allocation we can use it just as an array, the only difference is its memory is already dynamicly allocated;



return 0;
}