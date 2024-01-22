/*Write a program in C to check whether a given matrix is an identity matrix.
Test Data :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix.*/
#include<stdio.h>

void main(){
    int size;
    int yn=1;
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
    
     for (int i = 0; i <size; i++)
    {   for (int j = 0; j <size ; j++)
    {   
        printf("%d\t\n",arr[i][j]);
        
        
    }}
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (arr1[i][j] != 1 && arr1[j][i] != 0) {
                yn = 0;
                break;
            }
        }
    }

    // Display the result
    if(yn == 1) {
        printf(" The matrix is an identity matrix.\n\n");
    } else {
        printf(" The matrix is not an identity matrix.\n\n");
    }

}