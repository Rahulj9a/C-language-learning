//Calloc stands for continous allocation,
//it initializes each memory block with a default value of 0

#include<stdio.h> 
#include<stdlib.h>

int main(){ 
    float *ptr;
    ptr = (float *)calloc(30,sizeof(float));
    //It allocate contiguous space in memory for 30 blocks
    //with that it will intialize these blocks with 0

    // while working in malloc we have memory allocation just like calloc
    // but in calloc with memory allocation we also get a default value i.e. 0
    
    
    /* for(int i =0; i<6; i++){
         printf("Enter the value of %d element", i+1);
         scanf("%d", &ptr[i]);
     } */

     //Now lets we not take input in this then the system will automatically alocate value 0 to ptr;

     for(int i  =0; i<6; i++){
         printf("The value of element %d is %d\n", i+1, ptr[i]);
     }

     
return 0;
}