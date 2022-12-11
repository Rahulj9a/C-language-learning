
#include<stdio.h> 

void GoodMorning();
void GoodAfternoon();
void GoodEvening();

int main(){ 
    
     GoodMorning();
      
     
return 0;
}

void GoodMorning(){
    printf("Good Morning\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good Afternoon\n");
    GoodEvening();

}
void GoodEvening(){
    printf("Good Evening\n");
}