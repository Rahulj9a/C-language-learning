#include<stdio.h> 

int main(){ 

    // int a, b = a ; is not valid 
    int a;
    int b = a; //but this is valid
    int v = 3^3; // this is valid but remeber it will not give exponential value i.e. it is not used here 
    // as a power of symbol.
    0.33;// what type of data type it will return , then answer will be 'double' data type although 
         // 'float' will also be correct but 'double' is more accurate.
        // and if we not use any float or double before this no. then by default in c language it is treated as double.  
    
    float d = (3.0/8 - 2); // in this case it will return in float.
    double e = (3.0/8 - 2); // in this case it will return double.
    //q.3. write a program to determine wheather a no. is divisble by 97 or not.
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    printf("divisibility test returns: %d\n", num%97);

    //if reminder comes 0 that means no. is devisible by 97. 
return 0;
}