/*Write a program in C to find the sum of the left diagonals of a matrix.
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the left Diagonal elements is :5*/
#include<stdio.h>
int main() {
   
    int i, j, arr1[50][50], sum = 0, n;

   

    
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    // Input elements into the matrix and calculate sum of right diagonals
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
            // Calculate sum of elements on the right diagonal
            if (j == i) {
                sum = sum + arr1[i][j];
            }
        }
    }

    // Display the matrix
    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display the sum of right diagonal elements
    printf("Addition of the right Diagonal elements is : %d\n", sum);

    return 0;
}