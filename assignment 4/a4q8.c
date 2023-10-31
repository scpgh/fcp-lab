#include<stdio.h>
int main(){

//Itialisation of variables	

	int a,b,c,d;
	float s1,s2,s3;

//Scanning the values of a,b,c,d
	
	printf("Enter the value of a: ");
	scanf("%d",&a);
 
 	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	
	printf("\nEnter the value of c: ");
	scanf("%d",&c);
	
	printf("\nEnter the value of d: ");
	scanf("%d",&d);

//Solving operations	
	
	s1=(a+b)*(c/d);
	s2=(a+b)*c/d;
	s3=a+(b*c)/d;
	
//Printing the values
   
   printf("\nThe value of s1: %f",s1);
   printf("\nThe value of s2: %f",s2);
   printf("\nThe value of s3: %f",s3);
   		
	return 0;
}
