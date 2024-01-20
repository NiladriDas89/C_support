#include<stdio.h>

void main(){
    printf("Give the array size:\t");
  
    int size;
  
    scanf("%d",&size);
  
    int odd[size],even[size],array[size];
    
    int o=0 ,e=0;
    
    for (int i = 0; i <=size; i++)
    {
            printf("Enter the number :\t");
            scanf("%d",&array[i]);

    }
   
   
    for (int j = 0; j <=size; j++)
    {
        if (array[j]%2==0)
        {
        even[e]=array[j];
        e++;
        }
        else{
            
            odd[o]=array[j];
            o++;
        }
        
    }
  
   printf("\n\nOdd Number list\n========================\n");
  
   for (int i=0; i <o; i++)
   {
    printf("Odd :%d\n",odd[i]);
    
   }
 
   printf("\n\nEeven Number list\n========================\n");
   
   for (int i = 0; i < e; i++)
   {
    printf("even :%d\n",even[i]);
    /* code */
   }
   }
   
   
    
    








