//....................(Question-1)........................//

//Solving without variables

#include<stdio.h>
int main(){

// declaring variables
	
	int a,b;

// Scanning variables from user
	
	printf("\nEnter the value of a: ");
	scanf("%d",&a);

	printf("\nEnter the value of b: ");
	scanf("%d",&b);

//the process of swapping 'a' and 'b'	
	
	a=a+b;
	b=a-b;
	a=a-b;

//Printing the swapped values of 'a' and 'b'	
	
	printf("\nswapped value of a is: %d",a);
	printf("\nSwapped value of b is: %d",b);


//Solving with variables



// declaring variables
	
	int x,y,c;

// Scanning variables from user
	
	printf("\nEnter the value of x: ");
	scanf("%d",&x);

	printf("\nEnter the value of y: ");
	scanf("%d",&y);

// process of swapping x and y 
  
   c=x;
   x=y;
   y=c;

//Printing the swapped values of 'x' and 'y'

	printf("\nswapped value of a is: %d",x);
	printf("\nSwapped value of b is: %d",y);
	
	return 0;
}
