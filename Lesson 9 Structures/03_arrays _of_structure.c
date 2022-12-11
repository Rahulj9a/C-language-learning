//Just like an array of integers, an array of floats and an array of characters, we can create 
// an array of structures.
//syntex--> 
 
#include<stdio.h> 
#include<string.h>

struct employee{
    char name[20];
    int code;
    float salary;
};

int main(){ 
    struct employee facebook[100]; //--> an array of structures
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Rahul");

    facebook[0].code = 101;
    facebook[0].salary = 134.45;
    strcpy(facebook[0].name, "Harry");

    //  -----and so on.
    

     
return 0;
}