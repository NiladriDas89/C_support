#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*Write a C program to compute the sum of the three integers. Do not count a value that is 13 and add it to the sum.
Expected Output:

16
23
10
0
*/
void main(){
int sum,num1,num2,num3;
sum=num1+num2+num3;
scanf("%d %d %d",&num1,&num2,&num3);
if (num1==13)
{
    printf("%d",num1);
}
else if(num2==13)
{
    printf("%d",num2);

}
else if (num3==13)
{
    printf("%d",num3);
}
else{
    printf("%d",sum);
}

}