// Write a program to count the occurence of a given character
#include<stdio.h> 

int occurence(char str[], char c){
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr == c){
            count++;
             
        }
      ptr++;
    }
    return count;
}

int main(){ 

     char str[] = "Rahul Solanki";
     int count = occurence(str, 'l');
    
     printf("occurences = %d",  count);

return 0;
}