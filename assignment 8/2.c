//..........(Question-2).......//

#include<stdio.h>
int main(){

// Declaring variables //

    int i,j,n;

// Scanning order of the matrix // 

    printf("Enter the order of the matrix: ");
    scanf("%d",&n);

   int a[n][n];

// Scaning the elements of the matrix //

    printf("Enter the terms of the matrix: \n" );

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
    }

// printing the lower triangular matrix //
printf("The lower triangular matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>i){
                printf("0 ");
            }
            else{
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

