#include<stdio.h>
int main(){
	float a,mi;
	printf("\nEnter the value in kilometer/hour: ");
	scanf("%f",&a);
	mi = a*(0.621);
	printf("\nThe value in  miles/hour is: %0.2f",mi);
	return 0;
}
