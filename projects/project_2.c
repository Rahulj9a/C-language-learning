//Snake, Water, Gun or Rock, Paper, Scissors is a game most of us have played during school time. 
//Write a C program capable of playing this game with you.
//Your program should be able to print the result after you choose Snake/Water or Gun.

#include<stdio.h> 
 #include<stdlib.h>// to gernerate a random number
#include<time.h>

int rockpaperscissor(char you,char comp ){
    //return 1 if you win, return -1 if you loose and return 0 if game draw;
    int result;
    if(you == 'R' && comp == 'S'){
        result = 1;
    }
    else if(you == 'R' && comp == 'P' ){
        result = -1;
    }
    else if(you == 'R' && comp == 'R'){
        result = 0;
    }
    else if(you == 'P' && comp == 'R'){
        result = 1;
    }
    else if (you == 'P' && comp == 'S'){
        result = -1;
    }
    else if (you == 'P' && comp == 'P'){
        result = 0;

    }
    else if(you == 'S' && comp == 'R'){
        result = -1;

    }
    else if (you == 'S' && comp == 'P'){
        result = 1;

    }
    else if (you == 'S' && comp == 'S'){
        result = 0;
    }

    
return result;
}

int main(){ 
     int number;
     char you;
     char comp;
     
     srand(time(0));// to generate random number every time.
     number = rand()%100 + 1;
     if(number<33){
         comp = 'R';
     }
     else if(number>=33 && number <66){
         comp = 'P';
     }
     else {
         comp = 'S';
     }
    
    
    printf("Enter R for rock, P for paper and S for scissor\n");
    scanf("%c", &you);

    int result = rockpaperscissor(you, comp);
    if(result == 1){
        printf("You win\n");
    }
    else if (result == -1){
        printf("You lost\n");
    }
    else{
        printf("Game draw\n");
    }
 
    printf("Because you choose %c and computer choose %c\n", you, comp);
    printf("To quit press 0 and then enter\n");
    scanf("%d",result);


     
return 0;
}

