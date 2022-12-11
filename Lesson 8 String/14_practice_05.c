//Write a program to encrypt and decrypt a string by adding 1 to the ASCII value of its characters.


#include<stdio.h> 

void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++;

    }
}
void decrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;

    }
}

int main(){
    char c[] = "Rahul";// if we had to change individual elements than we have to use c[] neither *c will be enough

    encrypt(c);
    printf("encrypted message is %s\n", c);
    decrypt(c);
    printf("decrypted message is %s", c);

     
return 0;
}












