#include<stdio.h>
#include<stdlib.h>

void main(){
    int height;
    printf("Give you height: ");
    scanf("%d",&height);

    if (height!=0&&height>0)
    {
        if (height==150)
        {
            printf("\nAvarage height\n");
        }else if (height<150)
        {
            printf("\nDwarf\n");
        }else if (height>=165)
        {
            printf("\nTail\n\n");
        }
        
        
        
    }else{
        printf("Reenter you height");
    }
    
}