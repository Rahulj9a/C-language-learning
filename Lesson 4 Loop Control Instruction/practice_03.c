//write a program to sum first ten natural numbers using while loop;

#include<stdio.h> 

int main(){ 
int i, sum = 0, n ;
printf("Enter the value of n\n");
scanf("%d", &n);
for ( i= 0; i<n; i++){
    sum +=i+1;

}
printf("the value of sum of first %d natutal numbers ( 1 to %d) is \n %d\n",n, n, sum);
     
return 0;
}