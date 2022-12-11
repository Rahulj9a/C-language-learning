#include<stdio.h> 

typedef struct date{
    int date;
    int month;
    int year;
} date ;

date datecmp(date d, date dob){
    date age;
    if(dob.year > d.year){
          age.date = -1;
          age.month = -1;
          age.year = -1;
    }
    else if(dob.year == d.year){
        if(dob.month > d.month){
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
            }
            else if (dob.date = d.date){
                age.date = 0;
            }
            else {
                age.date = d.date - dob.date;
            }
            age.month = 12 -(dob.month - d.month);
        }
        else if (dob.month == d.month){
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
            }
            else if (dob.date = d.date){
                age.date = 0;
            }
            else {
                age.date = d.date - dob.date;
            }
            age.month = 0;

        }
        else{
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
            }
            else if (dob.date = d.date){
                age.date = 0;
            }
            else {
                age.date = d.date - dob.date;
            }
            age.month = d.month - dob.month;
            

        }
        age.year = 0;
    }
    else if (dob.year < d.year){
        if(dob.month > d.month){
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
            }
            else if (dob.date = d.date){
                age.date = 0;
            }
            else {
                age.date = d.date - dob.date;
            }
            age.month = 12 -(dob.month - d.month);
            age.year = (d.year - dob.year) - 1;
        }
        else if (dob.month == d.month){
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
                age.year = (d.year - dob.year) - 1;
                age.month = 11;
            }
            else if (dob.date = d.date){
                age.date = 0;
                age.year = d.year - dob.year;
                age.month = 0;

            }
            else {
                age.date = d.date - dob.date;
                age.year = d.year - dob.year;
                age.month = 0;
            }
            

        }
        else{
            if(dob.date > d.date){
                age.date = 30 - (dob.date - d.date);
            }
            else if (dob.date = d.date){
                age.date = 0;
            }
            else {
                age.date = d.date - dob.date;
            }
            age.month = d.month - dob.month;
            age.year = d.year - dob.year;

        }
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
     if(age.month == 0 && age.date == 0){
        printf("Happy b'day you become %d year old\n", age.year);
     }
     else if (age.year == -1){
        printf("Not born yet\n");
     }
      
    
     else{
         printf("Your age is %d year, %d month, %d days\n", age.year,age.month,age.date);
     

         printf("Enter any thing and then enter\n");
         scanf("%d", &age);
         printf("Bye bye");
    }
 return 0;
}