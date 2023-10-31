//.............(Question-2(e))......//

#include<stdio.h>
int main(){

// declaring variables //
    
    int i ,j , n=5;

// Printing the pattern //

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

return 0;
}