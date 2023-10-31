//..........(Question-1).......//

#include<stdio.h>
int main(){
	
// Declaring the variables //	
	
	int i,j,n,sum=0;

// Scanning the variables from the user //
	
	printf("Enter the order of the both arrays: ");
	scanf("%d",&n);

	int a[n],b[n],c[n];
	
	printf("Enter the elements of first array: \n");
	
	for(i=1;i<=n;i++){
		scanf("\n%d",&a[i]);
	}

	printf("Enter the elements of second array:\n ");	

	for(i=1;i<=n;i++){
		scanf("\n%d",&b[i]);
	}
// assigning the value of third matrix,adding all elements//
		
	for(i=1;i<=n;i++){

	c[i]=a[i]+b[i];
	sum=sum+c[i];
    }
    
// finding the average //
	
	printf("average is %d",sum/n);
 
	return 0;
}
