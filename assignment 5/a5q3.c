//....................Question-3.................//

#include<stdio.h>
int main(){
    int a ;

// Scanning the year from the user

    printf("Enter the year: ");
    scanf("%d",&a);

// Checking wheter is year is leap or not and printing it 

    if(((a%4==0)&&(a%100!=0))||(a%400==0)){
        printf("Leap year");

    }
    else{
        printf("Not a leap year");
    }
    return 0;
}