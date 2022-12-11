//Create an array of multiplication table of 7 upto 10.Use realloc to make it store 15 numbers;
#include<stdio.h>
#include<stdlib.h> 

 

int main(){ 

     int *ptr;
     int n;
     ptr = (int *)malloc(10*sizeof(int));
     printf("Write the value of integer you want to table of\n");
     scanf("%d", &n);
     for(int i = 0; i<10; i++){
         printf("%d X %d = %d\n", n, i+1, n*(i+1));
         
     }
     printf("And here malloc function end\n");


     ptr  = realloc(ptr, 15*sizeof(int));
      printf("And here realloc function start\n");
     for(int i = 0; i<15; i++){
       
        printf("%d X %d = %d\n", n, i+1, n*(i+1));}


return 0;
}