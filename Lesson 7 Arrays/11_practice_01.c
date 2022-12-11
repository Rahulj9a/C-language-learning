/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element 
where ptr is a pointer pointing to the first element of the array. */
#include<stdio.h> 

int main(){ 

     int arr[10] = {112,55,34,467,52,656,72,86,49,310};
     int *ptr = arr;
     printf("First element of the series is %d\n", *ptr);
      
     printf("the third element of the series is %d\n", *(ptr +2));
     printf("Third element of the series is %d\n", arr[2]);
     

     if (ptr + 2 == &arr[2] ){
          printf("These point to the same address");
     }
return 0;
}//Hence proved,