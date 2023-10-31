//.............(Question-2(f))......//

#include<stdio.h>
int main(){

// declaring variables //
    
    int i ,j ,s,k, n=5;
   
// Printing the pattern //
   for(i=1;i<=n;i++){
    for(s=1;s<=n-i;s++){
        printf(" ");
    }

    for(j=1,k='A';j<=2*i-1;j++){
       
        printf("%c",k);
        k=k+2;
    }
      printf("\n");
   }

   for(i=1;i<=n-1;i++){
    for(s=1;s<=i;s++){
        printf(" ");
    }

    for(j=1,k='A';j<=2*(n-i+1)-3;j++){
       
        printf("%c",k);
        k=k+2;
    }
      printf("\n");
   }
return 0;
}