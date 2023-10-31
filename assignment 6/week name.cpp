#include<stdio.h>
int main(){

// Declaring variables:

    int a;

// reading value from user

    printf("Enter a number 1 to 7 for weekdays: ");
    scanf("%d",&a);

//Checking the entered value and printing the week day

    if(a==1){
    	printf("Monday");
	}
	
	else if(a==2){
    	printf("Tuesday");
	}
	
		else if(a==3){
    	printf("Wednesday");
	}
	
		else if(a==4){
    	printf("Thursday");
	}
	
		else if(a==5){
    	printf("Friday");
	}
	
		else if(a==6){
    	printf("Saturday");
	}
	
		else if(a==7){
    	printf("Sunday");
	}
   
    return 0;
}
