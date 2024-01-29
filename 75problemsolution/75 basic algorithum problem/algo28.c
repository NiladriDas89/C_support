#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main(){
int num, num1;
scanf("%d%d",&num1,&num);
if (num / 10 == num1 / 10 || num / 10 == num1 % 10 || num % 10 == num1 / 10 || num % 10 == num1 % 10)
{
    
    printf("%d",true);
    
    }
else {
    printf("%d",false);
}


}
