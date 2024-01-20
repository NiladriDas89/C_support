#include<stdio.h>
#include<windows.h>

void main(){
    retry:
    printf("Enter the array size :\t");
    int size , max,min;
    scanf("%d",&size);
    int arr[size];
    
    //Array input Element :
    
    for (int i = 0; i<=size; i++)
    {   printf("Enter the Number :\t");
        scanf("%d",&arr[i]);
        }
        system("cls");
        max=arr[0];
        min=arr[0];
    //Calculate the max size of the element 
 printf("Your all element is:");
    for (int j = 0; j<=size; j++)
    {  
        printf("\t%d",arr[j]);
       
        if (arr[j]>max)
        {
            max=arr[j];
        }
        else if(arr[j]<min){
            min=arr[j];
        }
        
        
    }
    
printf("\n\nThese element are max: %d\n",max);
printf("\nThese element are minimum: %d\n",min);
    

}