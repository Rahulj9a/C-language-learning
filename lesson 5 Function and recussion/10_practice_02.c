// write a programme to convert celcious temprature into fahrenheit;
#include<stdio.h> 

float temprature_changer(int c);

int main(){ 

     int a;
     printf("wrte the value of temprature in celcious\n ");
     scanf("%d", &a);
     printf("the value of temprature in fahrenheit is %f", temprature_changer(a));

return 0;
}

float temprature_changer(int c){
    float f;
    f = (float) c*9/5 + 32 ;
    printf("f is %f", f);
    return f ;
}
