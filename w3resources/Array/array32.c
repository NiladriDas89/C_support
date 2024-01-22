/* Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5 */
#include<stdio.h>

void main(){
    int size;
    printf("Enter the array size:\t");
    scanf("%d",&size);
    int arr[size];
    printf("\n\n\t---------------\n\n\t");
    for (int i = 0; i < size; i++)
    {   printf("\n\tPosition:%d\t",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {  
        for(int tmp=i+1;tmp<size;tmp++){
        if (arr[i]+arr[tmp++]==15)
        {
            printf("Pair of elements can make the given sum by the value of index %d and %d \n",i,tmp);
        }
        }
        
    }
    
    


}