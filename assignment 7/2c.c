//.............(Question-2(c))......//

#include <stdio.h>

int main() {

// Declaring variables //
    
    int n=5,i,j,s;

    for (int i = 0; i < n; i++) {
        int coefficient = 1;
      
// Print spaces for formatting//
        
        for (int s = 0; s<n-i-1; s++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            if (j != 0) {
                coefficient = coefficient * (i-j+1)/j;
            }

           
// Print the coefficient with proper formatting //
            printf("%2d", coefficient);
        }
        printf("\n");
    }

    return 0;
}
