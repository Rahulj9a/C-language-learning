//gets is a funciton which can be used to recieve a  multi word string.
//Likewise puts can be used to output a string.
//puts() -->  print the string places the cursor on the next line/


#include<stdio.h> 

int main(){ 

     char s[34];
     printf("Enter your name\n");
     gets(s);// we use gets to enter multiword strings. that is entering name with spaces;
     printf("Your name is %s\n", s);

     //Multiple gets() call will be needed for multiple strings;

     puts(s);


return 0;
}