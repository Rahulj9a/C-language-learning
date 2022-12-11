#include<stdio.h> 

int main(){ 

     // i++ = i + 1
     int i = 5;
     printf("the value of i++ is %d\n", i++);
     printf("the value after i is %d\n", i);
     // in first print f the value will be 5 and then when it pass threw i++ thevalue become 6
     // so in second printf the value will be 6
     // i++ ka matlab hai phle print kro phir increment kro aur ++i ka matlab hain phle increment badme print
     printf("the value of i is %d\n", ++i);

     //i+= operator is used to increment by 10
     i+= 10;
     printf("the value of i is %d\n", i );

return 0;
}