#include<stdio.h> 
#include<math.h>

int main(){ 

     int a =2;
     int b =3;
     printf("the value of a + b is %d\n", a+b);
     printf("the value of a - b is %d\n", a-b);
     printf("the value of a * b is %d\n", a*b);
     printf("the value of a / b is %d\n", a/b);
     // * or + --> operators or we can say airthmatic operators
     // 2 or 3 --> operands
    // operands can be integers or real values  

    // example 2
    int z = b * a;
    printf("the value of z is %d \n", z);
    //we can write above line and it will execute succesfully 
    // but we cant write it like b * a = z, as it will not execute

     //3
     printf(" when 5 divide by 2 it's reminder is %d\n", 5%2); // it will give us 1 
     // '%' --> modular division operator
     printf(" when -5 divide by 2 it's reminder is %d\n", -5%2);  // it will give us -1 
     printf(" when 5 divide by -2 it's reminder is %d\n", 5%-2); // but in this case reminder will be 1 as 
     // sign of reminder is same as the sign of numerator

     //no operator is assumed to perform exponentiation in C, However we can use  'pow(x, y)'. and for that we 
     //have to '#include<math.h> in the starting.
     //e.g. 
     printf("the value of 4 to the power of 5 is %f\n", pow(4, 5));
     // remember--> we have to use "%f" in this case
     // the value of 5/2 is 2, and the value of 5.0/2 is 2.5
     //similarly the value of 2/5 is 0, and the value of 2.0/5 is 0.4
     //int a = 3.5, in this case 3.5 will be denoted as 3 as int is not able to store floats
     // float a = 3; a will store 3.0 i.e. promotion to float
     int l = 3.0/9;
     printf("%f",l);
return 0;
}