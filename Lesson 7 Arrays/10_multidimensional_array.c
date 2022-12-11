//An array can be of 2 or 3 or n dimension;
//a 2 dimensional array can be defined as 
/*int arr[3][2] = {{1,4}
                    {7,9}
                    {11,22}}*/
//we can access the element of this array as arr[0][0], arr[0][1] to define(1,4)and so on.....  

//e.g.

#include<stdio.h> 

int main(){ 
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];

    for(int i =0; i< n_students; i++){
        for(int j =0; j<n_subjects ; j++){
            printf("Enter the marks of of student %d in subject %d\n",i+1,j+1);
            scanf("%d", &marks[i][j]);


        }
    }

    
    for(int i =0; i< n_students; i++){
        for(int j =0; j<n_subjects ; j++){
            printf(" the marks of of student %d in subject %d is %d\n", i+1, j+1, marks[i][j] );
             
            

        }
    }

     
return 0;
}