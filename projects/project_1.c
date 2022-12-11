 /* We will write a program that gernerates a random numberand ask the player to guess it. If the player's guess
 id higher than the actual number, the program displays "Lower number please". Similarly if guess is lower.
 when the user guess the correct right number, the program displays the number is fueses the player used to 
 arrive at the number. */
#include<stdio.h> 
#include<stdlib.h>// to gernerate a random number
#include<time.h>

int main(){ 

     int number;
     int guess;
     int nguesses = 1;
     int replay = 1;
     srand(time(0));// to generate random number every time.
     number = rand()%100 + 1;// generate random number between 1 and 100
     //printf("the number is %d\n", number);
     // keep runing the loop until the number is guessed
    
         do{
         printf("guess the number between 1 to 100\n");
         scanf("%d", &guess);

         if( guess > number){
             printf("Lower number please!\n");
         }
         else if (guess < number){
             printf("Higher number please!\n");
         }
         else{
             printf("You guess it in %d attempt\n", nguesses);
         }
         nguesses++;

     }while( guess != number);
     printf("to quit press 0 and then enter");
     scanf("%d", &replay);
     if( replay = 0 ){
         printf("bye bye");
     }

      
     




return 0;
}