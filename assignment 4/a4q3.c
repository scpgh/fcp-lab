#include<stdio.h>

int main(){
// declaring variables
    
    int n,days,weeks,years;

//scanning number of days from user

    printf("Enter the number of days: ");
    scanf("%d",&n);

//Printing the in years,weeks and days
    
    years= (n/ 365);
    weeks= (n % 365) / 7;
    days= n - ((years * 365) + (weeks * 7));
    
    printf("\nYears: %d",years);
    printf(" , Weeks: %d",weeks);
    printf(" , Days: %d",days);
   
    return 0;
}