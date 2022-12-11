///Take name and salary of -- employees as input from the user
// and write them to a text file in the following format: name1, salary

#include<stdio.h> 

typedef struct employee{
    char name[20];
    int salary;

} emp;



int main(){
    int n;
    FILE *ptr;
    ptr = fopen("employee_deatils_10.txt", "w");
    
    
    printf("Write thr number of employes in company\n");
    scanf("%d", &n);
    fflush(stdin);

    emp e[n];

    for(int i = 0; i <n; i++){
        printf("Write the name of employee %d\n", i+1);
        gets(e[i].name);
        printf("write the salary of employee %d\n", i+1);
        scanf("%d", &e[i].salary);
        fflush(stdin);

    } 

     for(int a = 0; a<n; a++){
         fprintf(ptr, "%s , %d", e[a].name, e[a].salary );
     }
return 0;
}