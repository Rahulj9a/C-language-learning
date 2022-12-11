// we can use typedef keyboard to create an alias name or we can say nickname for datatypes in C;
//typedef is more commonly used with structures

#include<stdio.h> 
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp ;// that means now we can just write "emp" instead of "struct employee"

void show (emp emp1){
    printf("The code of employee is: %d\n", emp1.code);
    printf("The salary of employee is: %f\n", emp1.salary);
    printf("The name of employee is: %s\n", emp1.name);

}



int main(){
    //Declaring e1
    emp e1;
    emp *ptr;           
    //pointing ptr to e1
    ptr = &e1;

    //Set the member value of e1
    ptr->code = 101;
    ptr->salary = 443.5;
    strcpy(ptr->name, "Rahul");

    show(e1);

    return 0;
}