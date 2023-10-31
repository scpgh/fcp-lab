//..........(Question-9).......//

#include<stdio.h>
int main(){
   // Declaring the variables //	
	
	int i,j,n,ind;

// Scanning the variables from the user //
	
	printf("Enter the order of the array: ");
	scanf("%d",&n);
  
    int a[n],rev[n];

	printf("Enter the elements of array: \n");
	
	for(i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}

    for(i=n-1,j=0;i>=0,j<n;i--,j++){
         rev[j]=a[i];
    }

    for(i=0;i<n;i++){
         if(a[i]!=rev[i]){
          ind =1;
         }
         else{ind=0;}
    }

    if(ind==1){
        printf("Not a palindrome");
    }

    else{
        printf("It is a palindrome");
    }

       
    return 0;
}