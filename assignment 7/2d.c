//.............(Question-2(d))......//

#include<stdio.h>
int main(){

// declaring variables //
    
    int i ,j ,s, n=7;

// Printing the pattern //

   for(i=1;i<=n;i++){
    
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    
        for(s=1;s<=2*(n-i);s++){
            printf(" ");
        } 

        for(j=i;j>0;j--){
            printf("%d",j);
        }
    printf("\n");
       }
return 0;
}
