//Write a program containing functions which counts the number of positive integers in an array;
#include<stdio.h> 

int no_of_positive(int arr[], int n){
    int j = 0;
    for(int i =0; i<n; i++){
        if(arr[i]>0){
            j++;
            
        }
    }
    printf("positive integers are %d\n",j);


}

int main(){ 
    int arr[10] = {12,-12,12,34,23,-45,45,-89,-27,-28};
    no_of_positive(arr, 10); 

     
return 0;
}