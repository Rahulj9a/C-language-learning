// write a program to print multipilication table of a given number n
#include<stdio.h> 

int main(){ 

     int n;
     int i = 1;
     int t;
     printf("Write the value of n\n");
     scanf("%d",&n);
     printf("Write the value till which you want table\n");
     scanf("%d", &t);
     printf("the multipilication table of %d is\n", n);
     

     while (n>1){
         if(i>t){
             break;
         }
         else{

          
         printf("%d X %d = %d\n", n, i , n*i);
         }
         i++;

     }
    
    
    

return 0;
}