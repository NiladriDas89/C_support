/*Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times*/
#include<stdio.h>



void main( ){
    int size,i=0; int y;
    printf("Enter Your size of array:\t");
    scanf("%d",&size);

    int arr[size];
    for ( i = 0; i < size; i++)
    {   printf("Enter Number :\t");
        scanf("%d",&arr[i]);
    }
    
    
    
   
    
}