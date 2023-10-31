#include<stdio.h>

int main(){
	
// declaring variables

	float sp,cp;

//	scanning cp and sp from user

    printf("Enter the value of cost price: ");
    scanf("%f",&cp);
    
    printf("Enter the value of selling price: ");
    scanf("%f",&sp);
 
  //   checking loss or profit and printing profit and loss
  
    if(sp>cp){
    	printf("Profit is: %0.2f/-",sp-cp);
    	
	}
	
	else if(sp<cp){
    	printf("loss is: %0.2f/-",cp-sp);
    	
	}
	
	else if(sp==cp){
    	printf("There is no loss or profit");
    	
	}
	return 0;
}
