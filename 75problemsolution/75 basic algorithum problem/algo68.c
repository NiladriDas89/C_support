/*Write a C program to shift an element in the left direction and return a newly created array.
Expected Output:

Elements in original array are: 10, 20, 30, 40 
Elements in new array are: 20, 30, 40, 10*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main(){

int arr[3],tmp[3];
for (int i = 0; i <=3 ; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <=3 ; i++)
{   if (arr[i]<=arr[i+1])
{
    tmp[i]=arr[i+1];
    tmp[i+1]=arr[i];
}
 
}
for (int i = 0; i <=3; i++)
{
    printf("%d\t",tmp[i]);
}


}