//Wrte a programm to generate multiplication table of a given number in text format. make sure that the file is readable
// and well formatted

#include<stdio.h> 

int main(){ 

     FILE *ptr;
     int n;
     ptr = fopen("07_pr_02.txt", "w");
     printf("Enter the integer you want the table of\n");
     scanf("%d", &n);

     for(int i = 0; i<10; i++){
         fprintf(ptr, "%d X %d = %d\n", n, i+1, n*(i+1));

     }
     fclose(ptr);
     printf("Succesfully generated table of %d in 07_pr_01.txt", n);
return 0;
}