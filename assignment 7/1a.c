//.............(Question-1(a))......//

#include<stdio.h>
int main(){

//declaring variables 

    int n,sume=0,sumo=0,sum,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);

// adding the series and printing its value

    for(i=1;i<=n;i++){
        if(i%2==0){
            sume=sume+ i*i;
        }
        else{
            sumo=sumo+ i*i;
        }
    }
    sum=sume-sumo; //sum of odd and even terms//

    printf("The total sum is: %d",sum+2);

    return 0;
}