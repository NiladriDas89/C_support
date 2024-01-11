/*Write a program in C to store elements in an array and print them.
Test Data
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9*/
#include<stdio.h>



void main(){
int size = 10;
int arr[size];
for (int i = 0; i<=size; i++)
{
    printf("Enter your element\t");
    scanf("%d",&arr[i]);
    //break;
}
for ( int j = 0; j<=size; j++)
{
        printf("\n%d\n",arr[j]);
        }
}