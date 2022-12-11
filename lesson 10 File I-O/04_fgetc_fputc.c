//fgetc and fputc are used to read and write a charcter from | to a file;
//fgetc(ptr) => used to read a character from file;
//fptc(ptr) => used to write character 'c' to the file;
 
#include<stdio.h> 

int main(){ 

     FILE *ptr;
     FILE *ptr1;

     ptr = fopen("04_fgetc_file.txt", "r");//to print a file's content in programm we have to use reading mode
     char c = fgetc(ptr);
     fclose(ptr);
     printf("The value of my charcter is %c\n", c);

     ptr1 = fopen("04_fputc_file.txt", "w");
     fputc('l', ptr);


return 0;
}