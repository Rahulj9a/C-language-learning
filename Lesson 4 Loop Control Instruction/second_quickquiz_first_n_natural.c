

#include<stdio.h> 

int main(){ 
int i;
int n;
printf("write the value of n\n");
scanf("%d", &n);
printf("first %d natural numbers are\n", n);
for(i=0; i<n; i++){
    printf("%d\n", i+1);
}
     
return 0;
}