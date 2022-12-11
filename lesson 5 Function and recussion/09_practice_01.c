//write a program using function to find average of three numbers;
#include<stdio.h> 

float average(int a, int b, int c);
int main(){ 
    int a, b, c;
    printf("Write the value of a\n");
    scanf("%d", &a);
    printf("Write the value of b\n");
    scanf("%d", &b);
    printf("Write the value of c\n");
    scanf("%d", &c);
    printf("the average of %d, %d and %d is %f", a,b,c, average(a,b,c));

     
return 0;
}

float average(int a, int b, int c){
    float result;
    result =(float) (a+b+c)/3;
    return result;

}
