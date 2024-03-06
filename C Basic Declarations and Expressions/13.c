#include<stdio.h>
#include<windows.h>
int i;
void main(){
    int h;printf("How many number you want to put : ");scanf("%d",&i);
    int arr[i];
    for ( h = 0; h<i ; h++)
    {
        scanf("%d",&arr[h]);
        if (h==i-1)
        {   system("cls");
            for ( h = 0; h<i ; h++)
            {
                printf("[%d],\t",arr[h]);
                if (h==i-1)
                {   printf("\nFinding the Max & minumum value on these array element :\n");
                    for (int k = 0; k<i ; k++)
    {
        if (arr[k]<arr[k+1])
        {
            int tmp=arr[k+1];
            arr[k+1]=arr[k];
            arr[k]=arr[tmp];
            for (int k = 0; k<i ; k++)
    {
        if (arr[k]<arr[k+1])
        {
            int tmp=arr[k+1];
            arr[k+1]=arr[k];
            arr[k]=arr[tmp];
            for (int k = 0; k<i ; k++)
    {
        if (arr[k]<arr[k+1])
        {
            int tmp=arr[k+1];
            arr[k+1]=arr[k];
            arr[k]=arr[tmp];
            for (int k = 0; k<i ; k++)
    {
        if (arr[k]<arr[k+1])
        {
            int tmp=arr[k+1];
            arr[k+1]=arr[k];
            arr[k]=arr[tmp];
        }
        
    }
        }
        
    }
        }
        
    }
        }
        
    }

                    
                }
                
          printf("The max value is :%d \n Min value is:%d",arr[0],arr[i-1]);  }
            
        }
        
    }


    
}


        
