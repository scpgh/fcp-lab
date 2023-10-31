//.............(Question-1(b))......//

#include<stdio.h>

  int main(){

//Declaring variables and scanning variables from the user
  	
	  int n,i=1,sum=0;
  	
  	printf("Enter the number: " );
  	scanf("%d",&n);

//checking conditions and adding  	
  
  	while(i<=n){
  		sum=sum+i*i;
  		i++;
  		
	  }
	  printf("%d",sum);
	  return 0;
  }
