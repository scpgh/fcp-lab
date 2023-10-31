//......................(QUESTION-1)...................//

#include<stdio.h>
int main(){

//declaring varibles//

	int a,b,c,d,k,f,x;

// scanning variables from user//
	
	printf("Enter the value of a , b , c , d , k , x and f . respectively:\n ");
	scanf("\n%d\n %d\n %d\n %d\n %d\n %d\n %d\n ", &a , &b , &c ,&d , &k , &x ,&f);
	
// checking conditions and printing according//	

	if(x>k){
		printf("\na(x^3)-b(x^2)+cx-d");
	}
	if(x==k){
		printf("\n0");
	}
	if(x<k){
		printf("\n-a(x^3)+b(x^2)-cx+d");
	}
	return 0;
}
