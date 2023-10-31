#include<stdio.h>
int main(){
	float rad,dia,area,cir;
	printf("Enter the radius of the circle: ");
	scanf("%f",&rad);
	dia=2*rad;
	area=3.14*(rad*rad);
	cir= 2*3.14*rad;
	printf("\n Diameter is: %f",dia);
	printf("\n Circumference is: %f",cir);
	printf("\n Area is: %f",area);
	return 0;
}