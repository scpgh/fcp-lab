#include<stdio.h>
int main(){

    float s1,s2,s3,s4,s5,sum,perc;
   
    printf("Enter the subject1 Marks: ");
    scanf("%f",&s1);
   
    printf("Enter the subject2 Marks: ");
    scanf("%f",&s2);
   
    printf("Enter the subject3 Marks: ");
    scanf("%f",&s3);
   
    printf("Enter the subject4 Marks: ");
    scanf("%f",&s4);
   
    printf("Enter the subject5 Marks: ");
    scanf("%f",&s5);

    sum=s1+s2+s3+s4+s5;
    perc=(sum/5);
   
    printf("\nTotal marks: %f",sum);
    printf("\nTotal percentage: %f",perc);
   
    if ((s1<35)||(s2<35)||(s3<35)||(s4<35)||(s5<35))
    {
       printf("\nYour failed");
    }
    
    
    return 0;
}