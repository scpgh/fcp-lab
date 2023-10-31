#include<stdio.h>
int main(){
    float cel,far;
    printf("Enter the farhenheit value: ");
    scanf("%f",&far);
    cel=(far-32)*(0.556);
    printf("\nThe temp in celsius is: %f",cel);
    return 0;
}