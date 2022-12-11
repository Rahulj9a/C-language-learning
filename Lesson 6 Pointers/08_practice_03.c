//Write a program to change the value of a variable to ten times of its current value. Write a function
// and pass the value by refernce;
#include<stdio.h> 

void ten_times(int *a );

int main(){ 
    int a = 10;
    printf("The value of a before ten_times function is %d\n", a);
    ten_times(&a);
    printf("The value of a after ten_times function is %d\n", a);
    


     
return 0;
}

void ten_times(int *a ){
    int temp;
    int b;
    temp = *a;
    b = 10*temp;
    *a = b;
    



}