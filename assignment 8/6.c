//..........(Question-6).......//

#include<stdio.h>
int main(){
     int n,i,j,t,k;

// Scanning order of the matrix // 

	printf("Enter the order of the array: ");
	scanf("%d",&n);
	
	int a[n],b[n+1];

// Scaning the elements of the matrix//

	printf("Enter the elements of the array: \n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}

// Scanning the index and token to be added to array //

    printf("Enter the token to be added: ");
     scanf("%d",&t);
    
    printf("Enter the index where the token is to be added: ");
     scanf("%d",&k);

// adding the entered token //

    for(i=0;i<k;i++){
     b[i]=a[i];

    }
    if(i==k){
        b[k]=t;
    }

    for(j=i+1;j<n+1;j++,i++){
        b[j]=a[i];
    }

// Printing the modified array //
printf("Modified array:\n");
       for(i=0;i<n+1;i++){
        printf("%d ",b[i]);
    }
    return 0;
}