//Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)



#include<stdio.h> 

float force(int m);

int main(){ 
    int m;
    
    printf("Write the mass of object\n");
    scanf("%d", &m);

    printf("The force of attraction on the object is %f", force(m));



     
return 0;
}


float force(int m){
    float f = (float)9.8*m;
    return f;
}