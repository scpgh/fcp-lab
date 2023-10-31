//.............(Question-6)......//


#include<stdio.h>
#include<math.h> //for using power function//

int main(){
    
// declaring variables //
    
    int n,i=0,k,rem,sum=0;

// scanning the binary code //

    printf("Enter the value of binary code: ");
    scanf("%d",&n);

// Converting binary into decimal //

    while(n>0){
        rem=n%10;
        sum=sum+rem*pow(2,i);
        i++;
        n=n/10;
    }

// Printing the converted value //

    printf("The binary code in decimal is: %d",sum);
    return 0;
}