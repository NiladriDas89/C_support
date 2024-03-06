#include<stdio.h>
#include<stdlib.h>

void main(){
    int x,y;
    printf("Give your x y value here:")    ;
    scanf("%d %d",&x,&y);
    if (x>0 && y>0)
    {
        printf("%d %d It represent the First Quadrant",x,y);
    }else if (x<0 && y<0)
    {
        printf("%d %d It represent the Third Quadrant",x,y);
    }else if (x>0 && y<0)
    {
        printf("%d %d It represent the Third Quadrant",x,y);
    }else if (y>0 && x<0)
    {   printf("%d %d It represent the Fourth Quadrant",x,y);
        
    }
    
    
    
    



}