//.............(Question-1(e))......//

#include<stdio.h>

int main(){

//declaring varaibles//

    int n,sum=0,fact,i,rem,k;

//scanning variables//

    printf("Enter the value of n: ");
    scanf("%d",&n);

// finding the sum of the digits factorial //   
  
    i=n;
    while(n>0){
      rem=n%10;
      fact=1;
      for(k=1;k<=rem;k++){
        fact=fact*k;
      }
      sum=sum+fact;
      n=n/10;
    }

// Checking whether the sum is equal to entered value //

    if(sum==i){
        printf("It's a strong number");
    }

    else{
        printf("It's not a strong number");
    }
    return 0;
}