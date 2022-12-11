//Write a structure capable of storing date. Write a function to compare those dates.

#include<stdio.h> 

typedef struct date{
    int date;
    int month;
    int year;
} date ;

date datecmp( date d, date dob){
     struct date age;
     if(d.date>=dob.date){
         if(d.month>=dob.month){
              
            age.year = d.year - dob.year;
             
            age.month =(d.month - dob.month);
         }
         else{
               
            age.year = d.year -dob.year -1;

               
              
             age.month =12 -(dob.month - d.month);
         }
         
         age.date =30-( d.date-dob.date);

     }
     else{
         if(d.month>=dob.month){
               
            age.year = d.year - dob.year;
              
             age.month =(d.month - dob.month);
         }
         else{
             
            age.year = d.year - dob.year - 1;
              
            age.month =12 -(dob.month - d.month);
         }
        
         age.date=dob.date-d.date;


     }
     
      return age;
}


int main(){ 
    date d;
    date dob;
    printf("Write today's date\n");
    scanf("%d",&d.date);
    printf("Write the present month\n");
    scanf("%d",&d.month);
    printf("Write the present year\n");
    scanf("%d",&d.year);
    printf("Write the date of birth\n");
    scanf("%d",&dob.date);
    printf("Write the month of birth\n");
    scanf("%d",&dob.month); 
    printf("Write the year of birth\n");
    scanf("%d",&dob.year); 
     
    date age = datecmp(d,dob);
    printf("Your age is %d year, %d month, %d days\n", age.year,age.month,age.date);
    printf("And your age in days is estimately %d days\n", (age.year*365+(age.year/4)) + (age.month*30) + (age.date) + 5);

    printf("Enter 0 and then enter");
    scanf("%d", &age);
    printf("Bye bye");

return 0;
}
