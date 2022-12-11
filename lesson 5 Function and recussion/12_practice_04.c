//Write a program using recursion to calculate the nth element of the Fibonacci series.
// fib(n)= fib(n-1) + fib(n-2)
// fib(1)= 0
//fib(2)=1

#include<stdio.h> 

int fib(int a);

int main(){ 
    int n;
    printf("Write the value of n\n");
    scanf("%d", &n);

    printf("The %d term of the Fibonacci series is %d",n, fib(n));

      

return 0;
}


int fib(int a){
    int n;
     
    if(a == 1){
        n = 0;
        return n;
    }
    else if(a == 2){
        n = 1;
        return n;
    }
    else{


    n = fib(a-1) + fib(a-2);
    return n;
    }
    
    return 0;
}