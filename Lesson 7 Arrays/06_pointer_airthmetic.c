


#include<stdio.h> 

int main(){
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);// than it will add 4 to previous value of ptr
    ptr = ptr + 1;
    printf("The value of ptr is %u\n", ptr);// it will again add 4 to previous value of ptr
    char j[] = {23,67,45};
    char *ptr1 = &j;
    printf("The value of ptr1 is %u\n", ptr1);
    ptr1++;
    printf("The value of ptr1 is %u\n", ptr1);
    printf("the address of j[1] is %d\n", &j[1]);
    printf("%d, %d", *ptr, *ptr1);// increment is of 1 bcoz of char format.><
    // remember that doing so will not change the address of integer, and if we increse the address it just jump to next address;




     
return 0;
}