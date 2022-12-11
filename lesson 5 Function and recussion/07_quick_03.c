// use the liberary function to calculate the area of a square with side a;

#include<stdio.h> 
#include<math.h>

int area(int a);

int main(){ 
    int result;
    int a;
    printf("Write the value of sides of square\n");
    scanf("%d", &a);
    result = area(a);
    printf("The area of square is %d\n", result);
    // there is one more way
    printf("The value of area is %f\n", pow(a,2));

     
return 0;
}

int area(int a){
    int result;
    result = a * a;
    return result;
    
}