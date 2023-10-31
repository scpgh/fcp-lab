//..........(Question-8).......//

#include<stdio.h>
int main(){
    
// Declaring the variables //	
	
	int i,j,n,k;

// Scanning the variables from the user //
	
	printf("Enter the order of the array: ");
	scanf("%d",&n);
  
    int a[n][n],b[n][n],c[n][n];

	printf("Enter the elements of first array: \n");
	
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
		scanf("\n%d", &a[i][j]);
        }
	}

	printf("Enter the elements of second array: \n");
	
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
		scanf("\n%d",& b[i][j]);
        }
	}
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]+=(a[i][k])*(b[k][j]);
            }
        }
    }

// First matrix //
    printf("first matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
printf("\n");
    }

// Second matrix //
 printf("second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
printf("\n");
    }

// Multiplied matrix //
 printf("multiplied matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
printf("\n");
    }

return 0;
}