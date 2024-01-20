#include<stdio.h>
void main(){
        int del,size;
        int arr[size];

        printf("SIZE:");
        scanf("%d",&size);
        
        for (int i = 0; i <size; i++)
        {   scanf("%d",&arr[i]);
            
        }

        printf("Which number you want to delete:\t");
        scanf("%d",&del);
        
        for (int i = 0; i <size ; i++)
        {
            if (arr[i]==del)
            {   arr[i]=0;
                arr[i]=arr[i+1];
                size-=1;


            }else if(arr[i]!=del){
                printf("These element are dose not exist\n");
                
            }
               
        }
        
        for (int j = 0; j <size ;j++)
        {
            printf("E:%d\n",arr[j]);
            
        }
        


        
}