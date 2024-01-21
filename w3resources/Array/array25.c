/*Write a program in C to find the sum of rows and columns of a matrix.
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6 11
7 8 15

12 14*/
//array[row][col]

#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of the array :\t");
    scanf("%d",&size);

    int arr[size][size];//Inisilaizing the array & size
    
    //Input the array element :
    printf("\n\t--------Enter the Array Elemtnet -------------\n");
    
    for (int i = 0; i <size ; i++)
    {
        for (int j = 0; j <size ; j++)
    {   printf("\nThe position  %d %d\t",i,j);
        scanf("%d",&arr[i][j]);
        
    }
    }
    
    int rsum[size];
    
     for (int i = 0; i < size; i++) {
        rsum[i] = 0;
        for (int j = 0; j < size; j++) {
            rsum[i]=rsum[i]+arr[i][j];
        }
    }
    
    int csum[size];
    
    for (int i = 0; i < size; i++) {
        csum[i] = 0;
        for (int j = 0; j < size; j++) {
            csum[i]=csum[i]+arr[j][i];
        }
    }

    for (int i = 0; i <size; i++)
    {
        printf("\t%d\n", csum[i]);
        printf("\n%d\t",rsum[i]);
    }
    
    
    
    


}