/*Write a C program to check which number is nearest to the value 100 among two given integers. 
Return 0 if the two numbers are equal.
Expected Output:

95
0
99*/
#include<stdio.h>
#include<stdbool.h>

void main(void){

int num,num1;
scanf("%d %d",&num1,&num);
if (num==num1)
{
    
    printf("%d",false);
}
else if((num1||num>=90)&&(num1||num<=100)){
    printf("%d\n%d\n%d",num1,false,num);
    }
}










