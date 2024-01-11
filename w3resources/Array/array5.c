/* Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1    */
#include<stdio.h>
int main(){
int size;
printf("Enter your Size for the array :\t");

scanf("%d",&size);
int arr[size];
    
for ( int i = 0; i <size; i++){
    
    printf("Enter your number:\t");
    scanf("%d",&arr[i]); }
    
    for ( int i = 0; i < size; i++){
        for ( int j=i+1;j<size;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("These element are same%d\n",arr[j]);
            }
            
        }
        
        }
}