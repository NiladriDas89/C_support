// Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.

#include<stdio.h>

void main (){
int mult,num=1,per;
printf("Which multiplication table you want put the value: ");
scanf("%d",&per);
printf("\t==========Multiplication Table ============\n");
while (num<=10)
{
    mult=per*num;
    printf("\n\t%d * %d = %d\n",per,num,mult);
    
    num++;
}




}