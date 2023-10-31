#include<stdio.h>
int main (){

//Taking input of all the values 	
    printf("Input:\n ") ;

//	1.1          
    int input1;
    printf("\nEnter the number: ");
	scanf("%d",&input1);
		
// 1.2
    float input2;
     printf("\nEnter the number: ");
    scanf("%f",&input2);
    	
// 1.3
    float input3;
     printf("\nEnter the number: ");
    scanf("%f",&input3);
    
// 1.4
    float input4;
     printf("\nEnter the number: ");
    scanf("%f",&input4);
    
// 1.5
    int input5;
     printf("\nEnter the number: ");
    scanf("%d",&input5);
    

// 1.6
    char name[60];
     printf("\nEnter Your name: ");
    scanf("%s",name);
   
// 1.7
   char name1[60];
    printf("\nEnter Your college name: ");
   scanf("%s",&name1);
   printf("\nOutput\n");

//Printing of all inputs taken
   
/*1.1*/   printf("\n%d",input1);             
/*1.2*/   printf("\n%0.4f",input2);
/*1.3*/   printf("\n%0.2f",input3);
/*1.4*/   printf("\n%0.2f",input4);
/*1.5*/   printf("\n%d*%d",input5,input5);
/*1.6*/   printf("\n%s",name);
/*1.7*/   printf("\n%s",name1);

 return 0;
		
}