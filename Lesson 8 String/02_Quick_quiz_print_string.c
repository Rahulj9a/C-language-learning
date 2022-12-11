#include<stdio.h> 

int main(){ 

     char str[] = "Rahul";
     char *ptr = str;
     while(*ptr != '\0'){
         printf("%c\n", *ptr);
         ptr ++;
     }
      

     // Easy way is 
     char *ptr = "Rahul Solanki";
  
     printf("%s\n", ptr); // %s is format specifier used for string
return 0;
}