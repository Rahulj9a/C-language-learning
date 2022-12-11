#include<stdio.h> 

int main(){ 

     int a;
     scanf("%d", &a);

     while(a<10){
         a++;
         printf("%d\n", a);
          
          /* agar hum a++ ko printf se phle lgate hain to wo phle humari likhi value 
          pdhega aur usee a++ me rkhega jisse usme 0 add higa aur print krega aur fir agli value me
          1 add krga aur print krega lekin last me 10 bhi aayegi
          agar hum a++ ko printf ke baad me use krte hain to wo phle humari value print krega 
          fir usse a++ me rkhega jisse usme 0 add hoga aur fir print hoga
          aur agli baar 1 add krega aur print hoga last me 10 nhi ayegi 
          baki dono cheej krke dekh */ 

        

    

     }
     
     while(a<10){
         printf("%d\n",a );
         a++;

     }
return 0;
}