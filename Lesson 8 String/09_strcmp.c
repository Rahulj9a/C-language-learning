//strcmp  --> this funciton is used to compare the two strings
/* It return: 0 if strings sre equal;
            : negative value if first string's mismatching charcter is not greater than second string's
              correspondingmismatching character. 
            : it returns positive values otherwise  */ 
/*strcmp("For", "joke")  --> Positive value
  strcmp("joke", "for")  --> Negative value  */


#include<stdio.h> 
#include<string.h>

int main(){ 

     char st1[11] = "Rahul";
     char st2[] = "Solankiskdfgsfos";
     int val =  strcmp(st1, st2);
     printf("now the val is %d\n", val);


return 0;
}
