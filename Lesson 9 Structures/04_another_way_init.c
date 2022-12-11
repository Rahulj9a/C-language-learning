#include<stdio.h> 
#include<string.h>

struct employee{
    char name[20];
    int code;
    float salary;
};

 

int main(){ 

     struct employee Rahul = {"Rahul", 278, 2345.6};

     printf("Name is %s\n", Rahul.name);
     printf("Code is %d\n", Rahul.code);
     printf("Salary is %f\n", Rahul.salary);

     // to set all elememt to 0 is 
     struct employee Harry = {0}; 


return 0;
}