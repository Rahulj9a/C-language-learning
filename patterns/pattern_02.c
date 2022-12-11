/*
          *
        *   * 
      *   *   *
*/
#include<stdio.h> 

int main(){ 

     int n;
     printf("Write the value of n\n");
     scanf("%d", &n);

     for(int row=1; row<=n; row++){
         for(int space= n; space>row; space--){
             printf("  ");
         }
         for(int clm=1; clm<=row; clm++){
             printf(" * ");
         }
         printf("\n");
     }
return 0;
}       