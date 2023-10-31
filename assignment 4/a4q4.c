#include<stdio.h>
int main(){

// declaring variables
    
    float dist,fuel,mileage;

// Reading the variables from user
   
    printf("Enter the Distance travelled(km): ");
    scanf("%f",&dist);
    
    printf("\nEnter the Fuel consumed(Litres): ");
    scanf("%f",&fuel);

// Calculating mileage
    
    mileage=dist/fuel;

//Printing the value of mileage
    
    printf("\nThe value of mileage is(km/L): %0.2f",mileage);
     
     return 0;
}