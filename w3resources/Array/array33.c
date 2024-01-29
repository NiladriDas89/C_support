/*Write a program in C to find the majority element of an array.
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array*/


#include<stdio.h>

void main(){

    int size,crt=1,n;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d"&arr[i]);
    }
    for (int i = 0; i <size; i++)
    {for (int j=1;j<size;j++)
    {
        if (arr[i]==arr[j])
        {
            n=size/crt        
            }
        
    }
    
        
    }
    
    





}