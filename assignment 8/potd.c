#include<stdio.h>
int main()
{
    int i,j,count=0,c;
    int a[5]={3,5,0,0,4};


    for(i=0;i<5;i++){
        if(a[i]==0){
          count++;
        }

    }

    for(i=0;i<5;i++){
        for(j=i+1;i<5;j++){
       if(a[i]==0){
      c=a[i];
      a[i]=a[j];
      a[j]=c;

         
       } } 
    }
   for(i=1;i<5;i++){
      printf("%d",a[i]);
   }

    return 0;
}