// ....................(Question-5-(a))........................//
// Solving without variables

#include<stdio.h>
int main()
{

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



// ....................(Question-5-(b))........................//
//Solving with variables


// declaring variables
	
	int n2,n1,c;

// Scanning variables from user
	
	printf("\nEnter the value of a: ");
	scanf("%d",&n1);

	printf("\nEnter the value of b: ");
	scanf("%d",&n2);

// process of swapping a and b 
  
   c=n1;
   n1=n2;
   n2=c;

//Printing the swapped values of 'a' and 'b'

	printf("\nswapped value of a is: %d",n1);
	printf("\nSwapped value of b is: %d",n2);
	
	return 0;
}
