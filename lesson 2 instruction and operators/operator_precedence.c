#include<stdio.h> 

int main(){ 

     //priority of operators = 1st --> * / %
     // 2nd --> + - and 3rd --> =
     // now let's guess if * and / comes in a equation 
     // then we will go left to right 
     //e.g.
     int a =2;
     int b =3;
     int c =6;
     printf("%d", c*b/a*c/a);
     //the the value will be 12
return 0;
}