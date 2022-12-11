//Sometimes the dynamically allocated memory is insufficient or more than required;
//realloc is used to allocate momory of new size using the previous pointer and size;

#include<stdio.h> 
#include<stdlib.h>

int main(){ 

     int *ptr;
      
     ptr = (int *)malloc(6 * sizeof(int));  
      
     for(int i =0; i<6; i++){
         printf("Enter the value of %d element", i+1);
         scanf("%d", &ptr[i]);
     }

     for(int i  =0; i<6; i++){
         printf("The value of element %d is %d", i+1, ptr[i]);
     }
     //NOw lets we have to do same work with 10 integers, but as we know we dont have much memory left
     //So in this case we have to use reallocate 

     //reallocate ptr using realloc
     ptr = realloc(ptr, 10*sizeof(int));

       
     for(int i =0; i<6; i++){
         printf("Enter the value of %d element", i+1);
         scanf("%d", &ptr[i]);
     }

     for(int i  =0; i<6; i++){
         printf("The value of element %d is %d", i+1, ptr[i]);
     }



return 0;
}

