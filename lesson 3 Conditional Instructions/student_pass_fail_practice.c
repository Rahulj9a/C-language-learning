#include<stdio.h> 

int main(){ 

     int physics, chemistry, maths;
     int total;
     float total_percentage;

     printf("Enter physics marks\n");
     scanf("%d", &physics);
      printf("Enter chemistry marks\n");
     scanf("%d", &chemistry);
      printf("Enter  marks\n");
     scanf("%d", &maths);
     total = (physics + chemistry + maths);
     total_percentage = total/3;
     

     if((total < 40) || physics < 33 || chemistry < 33 || maths < 33){

         printf(" Your total percentage is %f and you are fail", total_percentage);

     }
     else{
         printf("Your total percentage is %f and you are pass", total_percentage);
     }
return 0;
}