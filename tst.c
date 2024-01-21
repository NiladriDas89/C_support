#include<stdio.h>
void main(){
    int size,size2;
    scanf("%d ",&size2);
    scanf("%d",&size);
    int arr[size][size];
    int sum=0;
    for (int i = 0; i < size; i++)
    {   for (int j = 0; j < size2; j++)
    {
        scanf("%d",&arr[i][j]);
    }}
    for (int i = 0; i < size; i++)
    {   for (int j = 0; j < size2; j++)
    {
        if (i==j){sum+=arr[i][j]; }
        
    }
    
        
    }
    printf("% d",sum);


}