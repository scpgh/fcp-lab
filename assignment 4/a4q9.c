 #include<stdio.h>
int main(){

//declaring the variables

int a,b,c;

//scanning the variabes 

	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	
	printf("\nEnter the value of c: ");
	scanf("%d",&c);

//Now checking conditions:

    if(a>b&&a>c){
    	printf("\na is the largest number");
		if(b>c){
			printf("\nc is the smallest");
		}
		else{
			printf("\nb is smallest");
		}
	}
	else if(b>a&&b>c){
		printf("\nb is the largest number");
		if(a>c){
			printf("\nc is the smallest");
		}
		else{
			printf("\na is smallest");
		}
	}
	else if(c>a&&c>b){
		printf("\nc is the largest");
		if(a>b){
			printf("\nb is the smallest");
		}
		else{
			printf("\na is smallest");
		}
	}	
		
	return 0;
	
}
