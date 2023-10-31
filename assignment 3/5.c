#include<stdio.h>
int main(){
    int a,b,c,s1,s2,s3;
    
    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    
    printf("\nEnter the value of c: ");
    scanf("%d",&c);
//5.1
    s1=(a*a)+(2*a*b)+(b*b);
    printf("\n(a^2)+2ab+(b^2)= %d",s1);
    
//5.2
    s2=(a*a)-(2*a*b)+(b*b);
    printf("\n(a^2)-2ab+(b^2)= %d",s2);
   
//5.3
    s3=(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c);
    printf("\n(a^3)+(b^3)+(c^3)-3abc= %d",s3);
    return 0;
}