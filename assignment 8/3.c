//..........(Question-3).......//

#include<stdio.h>
int main(){

// Declaring variables //
 
	int i,j,n,sum=0;

// Scanning order of the matrix // 

	printf("Enter the order of the array: ");
	scanf("%d",&n);
	
	int a[n][n];

// Scaning the elements of the matrix//

	printf("Enter the elements of the array: \n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
	
		scanf("%d",&a[i][j]);}
	}

// Printing original matrix for reference //

	printf("Original matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
			printf(" %d ",a[i][j]);}
				printf("\n");
		}

// Printing the right diagonal matrix //

	printf("Right diagonal matrix:\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i+j==n-1){
			sum=sum+a[i][j];
			printf(" %d ",a[i][j]);}
		
		
		else{
			printf(" 0 ");
		}
		
	
	}
	printf("\n");
}

  printf("\n");
  printf("Sum: %d",sum);
	return 0;
}
