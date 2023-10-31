//..........(Question-4).......//

#include<stdio.h>
int main(){
     int max,min,n,i,c,minpos=0,maxpos=0;

// Scanning order of the matrix // 

	printf("Enter the order of the array: ");
	scanf("%d",&n);
	
	int a[n];

// Scaning the elements of the matrix//

	printf("Enter the elements of the array: \n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}

// Finding maximum and its position //

   max=a[0];
  for(i=1;i<n;i++){
    if(max<a[i]){
        max=a[i];
        maxpos=i;
    }
  }

// Finding minimum and its position //

   min=a[0]; 
  for(i=1;i<n;i++){
    if(min>a[i]){
        min=a[i];
        minpos=i;
    }
  }

// Exchanging the maximum and minimum values in array //

  c = a[minpos];
  a[minpos] = a[maxpos];
  a[maxpos] =c;

// Printing the modified array //

printf("Modified array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
  
    return 0;
}