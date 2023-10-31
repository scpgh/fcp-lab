//..........(Question-5).......//

#include<stdio.h>
int main(){
     int n,i,j,t;

// Scanning order of the matrix // 

	printf("Enter the order of the array: ");
	scanf("%d",&n);
	
	int a[n];

// Scaning the elements of the matrix//

	printf("Enter the elements of the array: \n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}

// Scanning the token to be deleted from array //

     printf("Enter the token to be deleted: ");
     scanf("%d",&t);

// Deleting the entered token //

    for(i=0;i<n;i++){
        if(a[i]==t){
            for(j=i+1;j<n;j++){
                a[j-1]=a[j];
            }
        }
    }

// Printing the modified array //
printf("Modified array:\n");
       for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}