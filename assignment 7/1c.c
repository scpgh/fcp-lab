//.............(Question-1(c))......//

#include<stdio.h>

  int main(){

//Declaring variables and scanning variables from the user
  	
	  float n,i=1,sum=0;
  	
  	printf("Enter the number: " );
  	scanf("%f",&n);

//checking conditions and adding  	
  
  	while(i<=n){
		if(i==n){
			printf("1/%.0f",i);
		}
		else{
  		printf("1/%0.0f + ",i);}
  		sum=sum+ 1/i;
  		i++;
  		
	  }
	  printf("\nTotal sum: %0.2f",sum);
	  return 0;
  }
