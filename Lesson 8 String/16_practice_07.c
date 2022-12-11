//Write a program to check whether a given character is present in a string or not;
#include<stdio.h> 

int checkoccurence(char str[], char c){
    int count = 0;
    char *ptr = str;
    while( *ptr != '\0'){
        if (*ptr == c){
            count++;
        }
        ptr++;

    }
    return count;
}

int main(){ 
    char str[] = "Rahul Solanki is my name";
    char c;
    printf("Write the charcter you want to check in statement\n");
    scanf("%c", &c);
    int count = checkoccurence(str, c);
    if(count == 0){
        printf("The character '%c' is not in statement\n", c);

    }
    else{
        printf("The charcter '%c' is %d times in statement\n", c, count);
    }



     
return 0;
}