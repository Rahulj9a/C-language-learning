// A function defined in C can call itself This is recursion.
// A function caliing itself is also called recursive function.
#include<stdio.h> 
// a very good example of recursion is factorial;
// as factorial(n) = factorial(n-1)*n
//since we can write factorial of a number in terms of itself, we can program it using recursion.

int factorial(int x);

int main(){ 
    int a;
    printf("the value of a is");
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a, factorial(a));

     
return 0;
}

int factorial(int x){
    printf("calling factorial(%d)\n", x);
    if ( x== 1 || x==0){
        return 1;
    }
    else{
        return factorial(x-1) * x;
    }
}

// recursion is sometimes the most direct way to code an algorithm
// The condition which does'nt call the function any further in a recursive function is called as the base condition
//sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning resulting in memory error.
