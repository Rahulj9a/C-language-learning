//

#include<stdio.h> 

void printarray(int *ptr, int n){
    for (int i = 0; i<n; i++){
        printf("the value of element %d is %d\n", i+1, *(ptr+i));// for 1st element (i+1) will become 1 and *(ptr+1) will remain 0
        // and hence give the address of index 0 element
    }
}

int main(){ 
    int arr[]= {1,23,34,23,345,231,456,235};
    printarray(arr, 8);// we use 8 bcoz the no. of elements in it are 8

     
return 0;
}