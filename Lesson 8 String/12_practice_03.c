//Write a function slice() to slice a string, It should change the original string such that it is now
//sliced string, take m and n as the start and ending position of slice;

#include<stdio.h> 

void slice(char *st, int m,int n){
    int i = 0;
    while(i<n){
        st[i] = st[i+m -1];

        
        i++;
    }
    st[i] = '\0';
}

int main(){ 

     char st1[] = "Rahul";
     slice(st1, 1, 4);
     printf("%s", st1);
return 0;
}