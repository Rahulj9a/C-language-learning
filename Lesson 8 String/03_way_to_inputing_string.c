#include<stdio.h> 

int main(){ 

     char s[34];
     printf("Enter your name\n");
     scanf("%s", s);
     printf("Your name is %s\n", s);
     // Scanf automatically adds the null character when the enter key is pressed;
     // The String be short enough to fit into the array;
    // Scanf cannot be used to input multi-word strings with spaces;
return 0;
}