//Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.
#include<stdio.h>
#include<stdlib.h>

void main(){
int usr[10],i=0;
while (i<=10)
{   printf("Input: ");
    scanf("%d",&usr[i]);
    i++;


}
int j=0,k=1;
while (j<=10 )
{ 
   ( (usr[j]==usr[j+1]))?printf("these value are duplicate: %d %d\n",usr[j],usr[j+1]):printf("none: \n");
        
    j++;
}



  


}









