#include<stdio.h>

int add(void);

int main(){
  

  add();
  printf("sum: %d",add() );
  return 0;
}

int add(void){
  
  int n1,n2,sum;
  printf("Enter the number_1: ");
  scanf("%d",&n1);
  
  printf("Enter the number_2: ");
  scanf("%d",&n2);
  sum=n1+n2;
  
 
 return(sum);

}