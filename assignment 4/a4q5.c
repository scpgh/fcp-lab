#include<stdio.h>
int main(){
//declaring the variables
	
	int a;
	float b;
	double c;
	long double d;
	char e;
//printing the size of the datatypes	
	
	printf("\nsize of int is: %d Bytes" ,sizeof(a));
	printf("\nsize of float is: %d Bytes" ,sizeof(b));
	printf("\nsize of double is: %d Bytes" ,sizeof(c));
	printf("\nsize of long double is: %d Bytes" ,sizeof(d));
	printf("\nsize of char is: %d Byte" ,sizeof(e));
	
	return 0;
	
}
