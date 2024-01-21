/*Write a program in C to find the transpose of a given matrix.
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4*/
#include<stdio.h>

void main(){
   
    int size,size2;
   
    scanf("%d",&size);
    scanf("%d",&size2);
   
    int arr[size][size2];
   
    printf("Enter the Data on the array :\t\n");
   
    for (int i = 0; i < size; i++)
    {   for ( int j = 0; j < size2; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
        
    }
   int brr[size][size2];
    for (int i = 0; i < size; i++)
    {   for ( int j = 0; j < size2; j++){
 
            brr[j][i]=arr[i][j];
           
            }
        
    }
    
      for (int i = 0; i < size; i++) {
        printf("\n");
        for (int j = 0; j < size2; j++) {
            printf("%d\t", brr[i][j]);
        }
    }
        
    
    }