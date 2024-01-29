/*Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
Expected Output:

29
30
39
30
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int sum ,num,num2;
    scanf("%d %d",&num,&num2);
    if ((sum=num+num2)>=10&&(sum=num+num2)<=20)
    {
        sum=30;
        printf("%d",sum);
    }
    else{
        printf("%d",(sum=num+num2));
    }
    
}