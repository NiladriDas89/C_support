#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int sum ,num,num2;
    scanf("%d %d",&num,&num2);
    if ((sum=num+num2)>=10&&(sum=num+num2)<=20)
    {
        sum=18;
        printf("%d",sum);
    }
    else{
        printf("%d",(sum=num+num2));
    }
    
}