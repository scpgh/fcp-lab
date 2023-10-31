#include<stdio.h>

int main(){
	
	int n,i,rev=0;
	
	printf("enter the value of number: ");
	scanf("%d",&n);
	
	i=n;
	
	while(i>0){
	    
		rev=rev*10+i%10;
		i=i/10;
		
	}
	
	if(n==rev){
		printf("It's a palindrome");
	}
	
	else{
		printf("Not a palindrome");
	}
	
	return 0;
}
