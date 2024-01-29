#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
int num,num1,num2;
scanf("%d %d %d",&num,&num2,&num1);
int sum =num+num1+num2;
((num==num1||num2)||(num1==num||num2)||(num2==num||num1))?printf("%d",num2):printf("%d",sum);







}