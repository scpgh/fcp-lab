//....................Question-8.................//

#include<stdio.h>
#include<math.h> //because we will be using square root 
int main(){

// declaring variables

   float a, b, c, discriminant, root1, root2, realPart, imagPart,ans;

// Scanning the values from user
    

    printf("Let a quadratic be a(x^2)+b(x)+c=0");

    printf("\nEnter the value of a: ");
    scanf("%f",&a);
   
    printf("\nEnter the value of b: ");
    scanf("%f",&b);
   
    printf("\nEnter the value of c: ");
    scanf("%f",&c);
if(a=0){
 // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %0.2f and root2 = %0.2f", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %0.2f;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %0.2f+%0.2fi and root2 = %0.2f-%0.2fi", realPart, imagPart, realPart, imagPart);
    }}
    
    if(a==0){
    	ans= -c/b;
    	printf("%0.2f",ans);
	}


   return 0;
}
