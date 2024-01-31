//Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.
#include<stdio.h>
#include<stdlib.h>

void main(){
int user,sum=0;

while (user!=0)
{
    printf("Enter the Number: ");
    scanf("%d",&user);
    sum+=user;
    
    
}
printf("%d",sum);





}