/*Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15*/
#include<stdio.h>
void main(){
int num,i,sum=0;
printf("Enter your Size of the array :\t");
scanf("%d",&num);

int arr[num];
for ( i = 0; i<num; i++)
{   printf("Enter your Number :");
    scanf("%d",&arr[i]);
    sum+=arr[i];}
printf("\n\t%d",sum);
}















