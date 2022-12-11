// Here the address of the variable is passed to the function as arguments








#include<stdio.h> 

void swap(int *a,int *b);
void wrong_swap(int a,int b);

int main(){ 
    int x = 3,y= 4;
     printf("The value of x and y before wrong_swap is %d and %d\n",  x, y);
     wrong_swap(x,y);// will not work due to call by value
     printf("The value of x and y after_swap is %d and %d\n",  x, y);
     printf("The value of x and y before swap is %d and %d\n",  x, y);
     swap(&x,&y); // will work due to call by refrence
     printf("The value of x and y swap is %d and %d\n",  x, y);

     
return 0;
}


void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

           
}// but this will not work as it will do call by value and hence will not work in main function 
// and here we need call by refrence.

//

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}