//Write a program containing a function that reverses the array passed to it.
#include<stdio.h> 

int rev(int *arr, int n);

int main(){ 
    int arr[5] = {12,23,34,54,56};
    int *ptr = arr;
    rev(arr[4], 5);

     
return 0;
}

int rev(int *arr, int n){
    int ptr;
    for (int i = 0; i<5; i++){
        printf("%d, ", *(arr - i));

    }
return 0;
}