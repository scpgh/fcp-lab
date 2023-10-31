//.............(Question-3)......//

#include<stdio.h>
int main(){

//declaring variables//

    int n1,n2,i,sum=0;
    
    printf("Enter the value of n1: ");
    scanf("%d",&n1);
   
    printf("Enter the value of n2: ");
    scanf("%d",&n2);

if(n1>n2){
    for(i=n2+1;i<n1;i++){
        if(i%2==0){
            printf("%d\n",i);
            sum++;
        }
       
    }
   printf("\nTotal number of even numbers= %d",sum);}

else {
    printf("n1 must be greater than n2!! ");
}
    return 0;
} 