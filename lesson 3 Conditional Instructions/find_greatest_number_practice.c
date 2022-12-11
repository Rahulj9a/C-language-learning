#include<stdio.h> 

int main(){ 

     int first_number, second_number, third_number, fourth_number;
     printf("write the first number\n");
     scanf("%d", &first_number);
     
     printf("write the second number\n");
     scanf("%d", &second_number);

     printf("write the third number\n");
     scanf("%d", &third_number);
     
     printf("write the fourth number\n");
     scanf("%d", &fourth_number);

     if (first_number > second_number && first_number > third_number && first_number > fourth_number){
         printf("%d is greatest number", first_number);
     }

     
     if (second_number > first_number && second_number > third_number && second_number > fourth_number){
         printf("%d is greatest number", second_number);
     }

     
     if (third_number > second_number && third_number > first_number && third_number > fourth_number){
         printf("%d is greatest number", third_number);
     }

     
     if (fourth_number > second_number && fourth_number > third_number && fourth_number > first_number){
         printf("%d is greatest number", fourth_number);
     }
     
     

return 0;
}