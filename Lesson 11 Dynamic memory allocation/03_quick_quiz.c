//write a program to create an array of size using calloc where n is an integer entered by user

#include<stdio.h> 
#include<stdlib.h>

int main(){ 
    int *ptr;
    int n;
    printf("How many integers you want to enter\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(float));

for(int i =0; i<n; i++){
         printf("Enter the value of %d element\n", i+1);
         scanf("%d", &ptr[i]);
     }    

for(int i  =0; i<n; i++){
         printf("The value of element %d is %d\n", i+1, ptr[i]);
     }

     free(ptr);

     
return 0;
}