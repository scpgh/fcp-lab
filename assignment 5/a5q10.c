//....................Question-10.................//

#include<stdio.h>
int main(){

// declaring variables

    int n,i;

//scanning variables from user

    printf("Enter the value of n: ");
    scanf("%d",&n);

// looping and printing the value of cubes

  for(i=1;i<=n;i++)
     printf("\n%d",i*i*i);
     
    
    return 0;
}