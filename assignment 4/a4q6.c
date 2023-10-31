#include<stdio.h>
int main(){

//declaring variables    
    
    int n;

// reading the values from the user
   
    printf("Enter the number of calls: ");
    scanf("%d",&n);

//printing the final bill

    if(n>100){
        printf("\nThe bill is: %0.2f",(250+(1.25*(n-100))));
    }
    else{
        printf("\nThe bill is 250/-");
    }
    return 0;
}