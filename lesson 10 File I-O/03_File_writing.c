#include<stdio.h> 

int main(){ 

     FILE *ptr;
     int num = 45;
     ptr = fopen("03_generated.txt", "w");// now to write something in the file we use fprintf;
     
     fprintf(ptr, "The number is %d and", num);
     fclose(ptr);
return 0;
}