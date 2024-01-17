
/*Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5 */

/*Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output */
#include<stdio.h>

void main(){
    int size,i,j;
    printf("Enter Your size of array:\t");
    scanf("%d",&size);

    int arr[size];

    for ( int i=0; i < size; i++)
    {   printf("Enter your Number:");
        scanf("%d",&arr[i]);
        while (i==size)
        {   i++;
            if(arr[i]!=arr[i+1]){
                printf("These element are not same : %d\n",arr[i]);
            }
            break;
        }

        }
        
        
}
        
    
    
    
    
    

