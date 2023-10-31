//....................Question-9.................//

#include<stdio.h>
int main(){

// declaring variables

    int i,sum,n;

// scanning variables from user

    printf("Enter the number: ");
    scanf("%d",&n);

// looping statement 

    for(i=1,sum=0;i<=n;i++){
        sum=sum+i;
        
    }

// printing the sum

    printf("Sum : %d",sum);

    return 0;
}
