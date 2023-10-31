//......................(QUESTION-3)...................//

//......(part1).......//

#include<stdio.h>

int main(){

//declaring variables//   
    
    float a,b,c,x,y,z;
    int n1,n2,n3;

//printing input from the user// 

    printf("Enter the values of a and b respectively:\n ");
    scanf("%f\n%f",&a,&b);

   n1=a/b;
  printf("\n%d",n1);

//........(Part2).........//

//printing input from the user// 

    printf("\nEnter the values of x(enter a negative number) and y(+ve) respectively: \n");
    scanf("%f\n%f",&x,&y);

     n2=x/y;
    printf("\n%d",n2);

//........(Part3).........//

    printf("\nEnter the values of c(enter a positive number) and z(-ve) respectively: \n");
    scanf("%f\n%f",&c,&z);

     n3=c/z;
    printf("\n%d",n3);

    return 0;
}
