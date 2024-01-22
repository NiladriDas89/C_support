/*Write a program in C to accept two matrices and check whether they are equal.
Test Data :
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal.*/

#include<stdio.h>

void main(){
    int size;
back:
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size][size],arr2[size][size];
     printf("Enter the Data positon wise:\n\n\t-------------------------\t\n");
    for (int i = 0; i <size; i++)
    {   for (int j = 0; j <size ; j++)
    {   
        printf("\t'['%d']' '['%d']'\t",i,j);
        scanf("%d",&arr[i][j]);
        
    }}
     printf("Enter the Data positon wise:\n\n\t-------------------------\t\n");
    for (int i = 0; i <size; i++)
    {   for (int j = 0; j <size ; j++)
    {   
        printf("\t'['%d']' '['%d']'\t",i,j);
        scanf("%d",&arr2[i][j]);
        
    }}
        printf("Checking all array that they are equal or not equal:\n\n\t-------------------------\t\n");
    for (int i = 0; i <size; i++)
    {   for (int j = 0; j <size ; j++)
    {   
    if (arr2[i][j]!=arr[i][j])
    {
        printf("\nThese Array are not same");
        break;
    }
    else{
        goto back;        
    }

    
        
    }
    

    }}