//....................Question-6.................//

#include<stdio.h>
int main(){

// declaring variables

   float n;

// Scanning the value 

   printf("Enter the number: ");
   scanf("%f",&n);

// checking wheter the number is positive or negative or zero and pprinting accordingly

   if(n>0){
    printf("Entered value is positve");
   }
  else if(n<0){
    printf("Entered value is negative");
   }
   else{
    printf("Entered value is zero");

   }
    return 0;
}