//..........(Question-7).......//

#include<stdio.h>
int main(){
	
// Declaring the variables //	
	
	int i,j,n,sum=0;

// Scanning the variables from the user //
	
	printf("Enter the order of the array: ");
	scanf("%d",&n);
  
    int a[n];

	printf("Enter the elements of array: \n");
	
	for(i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          
          sum = (sum + a[i] % a[j])%(1000000007);

        }
    }

     printf("Sum of remainders: %d",sum);
return 0;
}