/*Write a C program that takes two positive integer values as input and checks if either of them is in the range of 
20 to 30 (inclusive). If at least one number falls in this range, 
the program returns the larger value. Otherwise, it returns 0.
Expected Output:

0
30
25
28*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){

int num,num2;
scanf("%d %d",&num,&num2);
if ((num2 || num )<=0)
{ 
    exit(0);
}

if (num>=20 && num<=30 && num2>=20 && num2<=30){ if (num>=num2){printf("%d",num);}else{printf("%d",num2);}}
else if (num>=20&&num<=30)
{
 printf("%d",num);
}
else if (num2>=20 && num2<=30)
{
    printf("%d",num2);
}
else{
    printf("%d",false);
}
}

