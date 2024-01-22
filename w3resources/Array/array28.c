/*Write a program in C to calculate the determinant of a 3 x 3 matrix.
Test Data :
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : -1
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 1
element - [2],[0] : -1
element - [2],[1] : -1
element - [2],[2] : 0
Expected Output :
The matrix is :
1 0 -1
0 0 1
-1 -1 0

The Determinant of the matrix is: 1 */
#include<stdio.h>

void main(){
    int size,det=0;
    printf("Enter the array size:\t");
    scanf("%d",&size);
    int arr1[size][size];
    printf("Enter the Data positon wise:\n\n\t-------------------------\t\n");
    
    for (int i = 0; i <size; i++)
    {   for (int j = 0; j <size ; j++)
    {   
        printf("\t'['%d']' '['%d']'\t",i,j);
        scanf("%d",&arr1[i][j]);
        
    }
    
        
    }
    for (int i = 0; i < 3; i++) {
        det = det + (arr1[0][i] * (arr1[1][(i + 1) % 3] * arr1[2][(i + 2) % 3] - arr1[1][(i + 2) % 3] * arr1[2][(i + 1) % 3]));
    }
    printf("The Determinant of the matrix is:%d",det);

}