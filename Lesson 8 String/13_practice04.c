//Wrie your own version of strcpy function form string.h;
#include<stdio.h> 
#include<string.h>

void strcopy(char *st1, char *st2, int n ){
    char *ptr = st2;
    int i =0;
    st1[n + i] =  ' ';
    while( *ptr != '\0'){
        st1[n + i + 1] = st2[i];
        i++;
        ptr++;
    }
    st1[i+n + 1] = '\0';
}

int main(){ 
    char st1[24] = "rahul";
    char st2[12] = "solanki";
    int n;
    int m;


   
     n = 5;
     strcopy(st1, st2, 5);

     printf("Your full name is %s", st1);
     
return 0;
}