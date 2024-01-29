#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){

int num,num2;
scanf("%d %d",&num,&num2);
if((num%5==num2%5||num==num2)||(num<num2||num>num2)){
    printf("%d %d",num,false);
}





}