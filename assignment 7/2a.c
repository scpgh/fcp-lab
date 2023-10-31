//.............(Question-2(a))......//

#include<stdio.h>
int main(){

// declaring variables //
    
    int i ,j ,s, n=7;


// Printing the pattern //

    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
