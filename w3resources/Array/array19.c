/*Write a program in C for adding two matrices of the same size.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The Addition of two matrix is :

6 8
10 12*/
#include<stdio.h>

void main(){
    int arr1[2][2],arr2[2][2],sum[2][2];
    printf("First matrix\n");
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Sceond matrix :\n");
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
 
    }

for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            sum[i][j]=((arr1[i][j])+(arr2[i][j]));
        }
        
    }
printf("Sum of the matrix\n\t");
for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {   printf("\n");
            printf("%d\t",sum[i][j]);
        }
        
    }
}