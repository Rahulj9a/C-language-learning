//

#include<stdio.h> 

int main(){ 

     FILE *ptr;
     ptr = fopen("04_fputc_file.txt", "r");
     // Now if we want to read a file then we have to do-->
     char c = fgetc(ptr);
     while( c != EOF){ // EOF means end of file
         printf("%c", c);
         c= fgetc(ptr);
     }
return 0;
}