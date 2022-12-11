//Write a recursive function to calculate the sum of first n natural numbers.

int sumc(int a);


#include<stdio.h> 

int main(){ 
    int n;
    printf("Write the value of n\n");
    scanf("%d", &n);
    printf("The value of sum of first %d natural numbers is %d", n, sumc(n));


     
return 0;
}


int sumc(int a){
    int s;
    
    if(a == 1){
        s = 1;
        return s;
    }
    else{
        s = a + sumc(a-1);
        return s;
    }


}