//Write a function SumVector which returns the sum of two vectors passed to it. 
//The vectors must be two-dimensional.

#include<stdio.h> 

struct vector{
    int x;
    int y;
};

struct vector sumvector(struct vector v1, struct vector v2){

    struct vector results;

    results.x = v1.x + v2.x;
    results.y = v1.y +v2.y;
return results;
}

int main(){ 
   


    struct vector v1, v2, sum;
    v1.x =34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x =45;
    v2.y = 67;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("X dim of sum is %d and Y dim of sum is %d\n", sum.x, sum.y);
    
return 0;
}