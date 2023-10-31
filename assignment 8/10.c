//..........(Question-10).......//

#include<stdio.h>
int main(){

// Declaring the variables //

    int i,j,n,k;
 
// Scanning the variables from the user //
	
    printf("Enter the order of the array: ");
    scanf("%d",&n);

   int a[n],b[n],c[n],even=0,odd=0;

    printf("Enter the terms of the array: \n" );

    for(i=0;i<n;i++){
        
            scanf("%d",&a[i]);
            
    }

// counting number of odd and even terms //    

       for(i=0;i<n;i++){
         if(a[i]%2==0){even++;}      
         else{odd++;}
       }
       
// entering even and odd terms of a[i] into b[i],c[i] //   
        
            for(j=0,i=0,k=0;j<even,i<n;i++){
                
                if(a[i]%2==0){
                  b[j]=a[i];
                  j++;
                }
                else{
                    c[k]=a[i];
                    k++;
                }
            
        }

// Printing even terms //

printf("even:\n");    
        for(i=0;i<even;i++){
            printf("%d ",b[i]);
        }

// printing odd terms //

printf("\nodd:\n");       
        for(i=0;i<odd;i++){
            printf("%d ",c[i]);
        }
       
     return 0;
}