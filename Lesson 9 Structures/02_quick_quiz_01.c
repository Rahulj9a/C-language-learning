//Write a program to store the details fo 3 employees from user defined data, 
//Use the structure declared above;
#include<stdio.h> 
#include<string.h>

struct employee{
    char name[20];
    int code;
    float salary;
};

int main(){
    struct employee e1, e2, e3;
    printf("Enter the value of code of e1\n");
    scanf("%d", &e1.code );
    printf("Enter the value of salary of e1\n");
    scanf("%f", &e1.salary );
    printf("Enter the Name of e1\n");
    scanf("%s",e1.name);

     printf("Enter the value of code of e2\n");
    scanf("%d", &e2.code );
    printf("Enter the value of salary of e2\n");
    scanf("%f", &e2.salary );
    printf("Enter the Name of e2\n");
    scanf("%s",e2.name);

    printf("Enter the value of code of e3\n");
    scanf("%d", &e3.code );
    printf("Enter the value of salary of e3\n");
    scanf("%f", &e3.salary );
    printf("Enter the Name of e3\n");
    scanf("%s",e3.name);

    



     
return 0;
}