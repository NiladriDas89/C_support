#include<stdio.h>

    
void main(){
   
    printf("Enter the size Of the array :");
   
    int size;
   
    scanf("%d",&size);
   
    int arr[size],temp;
   
   
    for (int i = 0; i <size ; i++)
    {   printf("Input the number:\t\n");
        scanf("%d",&arr[i]);
    }
    
    //Logic
    //input: 2,9,3,1 expected output : 1,2,3,9
    
     for (int i = 0; i < size - 1; i++) {  
        for (int j = 0; j < size - i - 1; j++) {  
            if (arr[j] < arr[j + 1]) {  
                 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i <size; i++)
    {
        printf(" the element:%d\n",arr[i]);
    }
    
}
