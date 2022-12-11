//Take name and salary of two employees as input from the user
// and write them to a text file in the following format: name1, salary

#include<stdio.h> 

int main(){ 
    FILE *ptr;
    ptr = fopen("09pr04.txt", "w");
     
    int a;
    int b;
    char c[20];
    char d[20];
    


     printf("Enter the name of first employee\n");
     gets(c);
     printf("Enter the name of second employee\n");
     gets(d);
     printf("Enter the salary of first employee\n");
     scanf("%d", &a);
     printf("Enter the salary of second employee\n");
     scanf("%d", &b);

     
     fprintf(ptr, "%s, %d \n%s, %d", c,a, d,b);


return 0;
}