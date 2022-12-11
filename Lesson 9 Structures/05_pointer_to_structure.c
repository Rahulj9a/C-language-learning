//A pointer to structure can be created as follows-->
#include<stdio.h> 
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){ 
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 101;// This way and
    ptr->salary = 101.45;//this way will work as it is. this is known as the arrow operator
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);



     
return 0;
}