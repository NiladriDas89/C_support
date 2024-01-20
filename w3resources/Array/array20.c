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
            sum[i][j]=((arr1[i][j])-(arr2[i][j]));
        }
        
    }
printf("Substraction of the matrix\n\t");
for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {   printf("\n");
            printf("%d\t",sum[i][j]);
        }
        
    }
}