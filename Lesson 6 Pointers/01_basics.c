//A pointer is a variable which stores the address of another varibale
//The "address of (&)" operator, is used to obtain the address of a given variable;
// Format specifier for printing pointer address is "%u"
//the" value of address" operator or "*" is used to obtain the value present at a given memory address.
/* int main(){
    int a = 3;
    int *b = &a;
    printf("%d\n", &a); // --> print the address of a;
    printf("%d\n", a); //--> print the value stored in a;
    printf("%d", b); // -->print the value stored in b that is address of a 
    printf("%d\n", *b); // --> print the value stored in the varible whose address is b representing


    return 0;
}*/ 




//Now to declare  a pointer we use following syntex
//int *j;  --> declare a variable j of type int point
// j = &i;  --> store address of i in j
/* int main(){ 
    int *j;// data type to store the address of j;
    int i = 2;
    j = &i;
    printf("%d", &i);

return 0;
} */

//"int *"// pointer to integer
//"cahr *"// pointer to character
// "float *"// pointer to float 
#include<stdio.h>

int main(){
    int a = 3;
    int *b = &a;// b is a pointer
    printf("%d\n", &a); // --> print the address of a;
    printf("%d\n", a); //--> print the value stored in a;
    printf("%d\n", b); // -->print the value stored in b that is address of a 
    printf("%d\n", *b); // --> print the value stored in the varible whose address is b representing


    return 0;
}