/*Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12*/
#include<stdio.h>

void main(){

int size,i;

printf("Enter your Size for the array :\t");

scanf("%d",&size);

int arr[size],tmp[size];

for ( int i = 0; i <size; i++)
{
    printf("Enter your number:\t");
    scanf("%d",&arr[i]);
    }
    printf("\nAll Element of the 1st array\n ");
    
    for ( i = 0; i <size; i++)
    {
        printf("\n%d",arr[i]);
        tmp[i]=arr[i];

    }
    printf("\nAll element of sceond array that have copy from the 1st array :\t\n");
    for (int i = 0; i <size; i++)
    {
        printf("\n%d",tmp[i]);
    }
}    
    

   
    
    


