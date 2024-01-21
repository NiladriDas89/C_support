#include<stdio.h>

void main(){
  int size,i,j;//,size2;
   
    scanf("%d",&size);
    //scanf("%d",&size2);
   
    int arr[size][size];
   
    printf("Enter the Data on the array :\t\n");
   
    for (int i = 0; i < size; i++)
    {   for ( int j = 0; j < size; j++)
    {
        scanf("%d",&arr[i][j]);
    }
for (i = 0; i < size; i++) {
        printf("\n");
        for (j = 0; j < size; j++) {
            if (i <= j) {
                printf("% 4d", arr[i][j]); // Print the original elements if i <= j (lower triangular)
            } else {
                printf("% 4d", 0); // Print zero if i > j (upper triangular)
            }
        }
    }
    printf("\n\n");

}}