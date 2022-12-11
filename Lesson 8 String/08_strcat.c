//strcat()  --> this funciton is used to conatenate two strings;

#include<stdio.h> 
#include<string.h>


int main(){ 

     char st1[11] = "Rahul";
     char st2[] = "Solanki";
     strcat(st1, st2); // it will not give any space between strings;
     printf("Now the st1 is %s", st1);

return 0;
}