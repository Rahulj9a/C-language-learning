//find a number is prime or not
#include<stdio.h> 

int primecheck(int n){
    int p;
    for(int i = 0; i<n; i++){
        if(i == 0 || i ==1){
            p = 0;
        }
        else if( n % i == 0){
            p = 1;
            break;
        }
        else{
            p = -1;
        }
    }
    return p;
}

int main(){ 
    int n;
    int p;

     printf("Write the value of n\n");
     scanf("%d", &n);

    p = primecheck(n);
     if(p == 1){
         printf("The number is not a prime number\n");

     }
     else if (p == -1){
         printf("The number is a prime number\n");
     }

     

return 0;
}