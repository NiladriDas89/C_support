/*Write a C program that checks if two given integers are in the range of 
40 to 50 inclusive, or if they are both in the range of 50 to 60 inclusive.
Expected Output:

0
0
1
1*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){  //50-60 = 1 , 40-50 = 0 
int num,num2;
scanf("%d %d",&num,&num);
    
if(((num>=40) && (num<=50))||((num2>=40) && (num2<=50))){
    num2=false;
    num=false;
printf("%d %d",num2,num);
}
else if (((num>=50) && (num<=60))||((num2>=50) && (num2<=60)))
{   num2=true;
    num=true;
    printf("%d %d",num,num2);
}


if (num && num2<=0)
{
    exit(0) ;
}

}
//code complete ...............









