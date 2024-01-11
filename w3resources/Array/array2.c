/*Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/
#include<stdio.h>



void main(){
int size = 10,tr,tmp;
int arr[size];
for (int i = 0; i<=size; i++)
{
    printf("Enter your element\t");
    scanf("%d",&arr[i]);
    //break;
}
printf("Enter your 1st Positionof the array :\t");

scanf("%d",&tr);
printf("Enter your 2nd Positionof the array:\t");
scanf("%d",&tmp);

for (;tmp>tr;tmp--)
{
        printf("\n%d\n",arr[tmp]);
        }
}