//......................(QUESTION-2)...................//

#include<stdio.h>
int main(){

//Scan the value of score for the user

	int score;
	printf("Enter the score you got:  ");
	scanf("%d",&score);
	
//checking the score and assigning the grade

   if(score<50){
   	printf("Grade is : F");
   	
   }
   else if(score>=70&&score<80){
   	printf("Grade is : B+");
   	
   }
   else if(score>=50&&score<60){
   	printf("Grade is : C");
   	
   }
   else if(score>=60&&score<70){
   	printf("Grade is : B");
   	
   }
   else if(score>=80&&score<90){
   	printf("Grade is : A");
   	
   }
   else if(score>=90&&score<=100){
   	printf("Grade is : A+");
   	
   }
   return 0;
}
