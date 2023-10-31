//.............(Question-1(d))......//

#include<stdio.h>

int main(){
	
	int n,i,sum=0,rem;
	
	printf("enter the value of number: ");
	scanf("%d",&n);
	
	i=n;
	
	while(i>0){
	   
	    rem=i%10;
		sum=(sum)+(rem*rem*rem);
		i=i/10;
		
	}
	
	if(n==sum){
		printf("It's a amstrong number");
	}
	
	else{
		printf("Not a amstrong number");
	}
	
	return 0;
}
