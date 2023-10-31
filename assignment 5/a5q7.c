//....................Question-7.................//

#include<stdio.h>
int main(){

// declaring variables

   float n1,n2,n3;

// Scanning the values from user

    printf("Enter the side 1: ");
    scanf("%f",&n1);
   
    printf("\nEnter the side 2: ");
    scanf("%f",&n2);
   
    printf("\nEnter the side 3: ");
    scanf("%f",&n3);

// Checking wheter the triangle is equilateral,isoscles,or scalene

   if((n1==n2)&&(n2==n3)){
    printf("Equilateral triangle");

   }

   if(n1==n2||n1==n3||n2==n3){
    printf("\nIsosceles triangle");
   }
   else{
    printf("\nScalene traingle");
   }

    return 0;
}