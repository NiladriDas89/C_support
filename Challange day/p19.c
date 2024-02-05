/*Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three*/

#include<stdio.h>
#include<stdlib.h>

void main(){
int num1,num2,num3;
 scanf("%d %d %d",&num1,&num2,&num3);
int tmp=(num1>num2)?num1:num2;
if (tmp>num3)
{
    printf("%d",tmp);
}else{
    printf("%d",num3);
}




}