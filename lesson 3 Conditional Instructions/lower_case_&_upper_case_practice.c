//for this problem refer to "ascii table".
//ques. to determine a character is lower case or upper case.

#include<stdio.h> 

int main(){ 
//97-122 = a-z
char ch;

printf("Enter the Character\n");
scanf("%c", &ch);
if( ch <= 122 && ch>= 97){
    printf("It is lower case");

}
else{
    printf("It is not lowercase");
}

     
return 0;
}