//....................Question-1.................//

#include<stdio.h>
int main(){

// Declaring variables:

    int a;

// reading value from user

    printf("Enter a number 1 to 7 for weekdays: ");
    scanf("%d",&a);

//Checking the entered value and printing the week day

    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

// If the entered value is not 1 to 7 then :
   
    default:
        printf("Enter number from 1 to 7 only not other than these!!");
        break;
    }
   
    return 0;
}
