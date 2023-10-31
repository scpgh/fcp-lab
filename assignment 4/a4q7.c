#include<stdio.h>
int main(){

// declaring variables
    
    int a;

// Scanning variables from the user
    
    printf("Enter a number: ");
    scanf("%d",&a);

// Printing the value of 2 bits shifted value of 'a'
    
    printf("After shifting 2 bits towards left in the given we get the value as: %d",a<<2);

    return 0;
}
