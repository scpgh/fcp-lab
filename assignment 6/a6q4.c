//......................(QUESTION-4)...................//

#include<stdio.h>

int main(){

// defining varibles//

    float unitc;

//scanning electricity bill from user//
   
   printf("Enter the amount of units consumed: ");
   scanf("%f",&unitc);

//printing the current bill accordingly//

    if(unitc>=500){
        printf("bill is %.2f",(unitc*5.5));
    }


     if(unitc>=200&&unitc<500){
        printf("bill is %.2f",(unitc*3.5));
    }
    

     else if(unitc>=100&&unitc<200){
        printf("bill is %.2f",(unitc*2.5));
    }

    else if(unitc<100){
        printf("bill is %.2f",(unitc*1.5));
    }

return 0;
}