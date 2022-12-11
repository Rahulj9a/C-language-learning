//Write a program to take string as an input from user using %c and %s. Confirm that the strings are equal.
#include<stdio.h> 
#include<string.h>

int main(){ 

     char st1[34];
     char st2[34];
     int i = 0;
     char c;
     printf("Enter the value of first string\n");
     scanf("%s", st1);
     printf("Enter the value of st2 character by character\n");
     
      
      

     while(c != '\n'){
         fflush(stdin);
         scanf("%c", &c);
          
         st2[i] = c;
         i++;
     }

     st2[i-1] = '\0';// if we use st(i) then strcmp will be -1 bcoz we are including \n in the input
     // but we use st(i-1), them we are not including\n and hence strcmp will be 0
     printf("The value of st1 is %s\n", st1);
     printf("the value of st2 is %s\n", st2);
     printf("strcmp for these strings return %d", strcmp(st1,st2));
     // we use fflush function so that scanf of st2 didnot catch the value of 1st scanf
     
return 0;
}