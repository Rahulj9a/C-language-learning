// Array and string --> Similar data;
// Structure --> can hold dissimilar data;
//Syntex --> A C structure  can be created as follows-->
// Structure in C is a collection of variables of diferent types under a single name.

/*we can create the data types in the employee structure seperately but when the number of properties
in a structure increases,it becomes difficult for us to create data variables without structure*/

//1. Structure keep data organised.
//2. Structures make data management easy for the programmer.
#include<stdio.h> 
#include<string.h>

struct employee{ // this declares a new user defines data type
    int code;
    float salary;
    char name[30];
};   //--> semicolumn is important

int main(){ 

     // so now we can write it as;
      struct employee e1;
      e1.code = 34234779;  // the dot between e1 and code is called as memeber operator;
      e1.salary = 3423.54; // dot means set code/salary of e1 as written
      //e1.name = "Rahul" we can not write it as this as we need string and not character; so first we have to
      //include string.h
      // we will write it as-->
      strcpy(e1.name, "Rahul");

      printf(" your name is %s, with code %d and you will recieve a sum of %f euros",e1.name,e1.code, e1.salary);

     

return 0;
}

//Structure in memory:- Structures are stored in contigious memory locatins for the structure
//In an array of structures, these employee instances are stored adjacent to each other.