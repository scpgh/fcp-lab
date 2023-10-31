//......................(QUESTION-5)...................//

#include<stdio.h>
int main(){

// declaring the variables //

  int amt;

// scanning the policy amount //

  printf("Enter the value of policy amount: ");
  scanf("%d",&amt);

// finding the commision and printing it //

  if(amt<=10000){
    printf("\nThe commision is: %.2f",(5/10000)*amt);
  }  

  else if(amt>=25000){
    printf("\nThe commision is: %.2f",(140)+(7.5/10000)*(amt-25000));
  }  

  else if(amt>10000&&amt<20000){
    printf("\nThe commision is: %.2f",(50)+(6/10000)*(amt-10000));
  }  

    return 0;
}