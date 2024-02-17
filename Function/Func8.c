/*This is my best program & logic  that i have written */



#include<stdio.h>
#include<stdlib.h>

void cmp();

void main(){
   
    cmp();

}
void cmp(){
    int max;int arr[10];
    int n;
    printf("Enter your array size: ");
    scanf("%d",&n);
    printf("\n:Enter the Number list:\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
             for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
               for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
               for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;}
            for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
            for (int i = 0; i <n; i++){
        if (arr[i]<=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;}}
            }
            }
            }
            
        }}
            
        }}
            
        }
        
    }
    printf("\nAll element list is :\n");
    for (int i = 0; i <10 ; i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("The highest element is : %d",arr[0]);
    
    
}