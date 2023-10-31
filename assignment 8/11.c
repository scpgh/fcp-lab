//..........(Question-11).......//

#include<stdio.h>

int main() {

// Declaring variables //

    int n;

// Scanning variables from the user //

    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    int sum2 = 0;  

    printf("Enter the array elements : \n");

    for(int i = 0; i<n-1; i++) {
        scanf("%d", &a[i]);
        sum2 += a[i];
    }  

    int sum1 = ((n)*(n+1))/2;

    printf("Missing number is %d", sum1-sum2);

    return 0;
}