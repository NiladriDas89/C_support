#include<stdio.h>
#include<stdlib.h>

void main(){
int x,y ;
printf("\nEnter the value of X & Y: ");
scanf("%d %d",&x,&y);
    if ((x&&y!=0 )&& (x>0 &&y>0))
    {
        printf("\nThe coordinate point (%d,%d) lies in the First Quadrant ",x,y);

    }
    else if ((x&&y!=0 )&& (x<0 && y<0))
    {
        printf("\nThe coordinate point (%d,%d) lies in the Third Quadrant ",x,y);
    }
    else if ((x>0 && x!=0)&& (y<0 && y!=0))
    {
        printf("\nThe coordinate point (%d,%d) lies in the Sceond Quadrant ",x,y);
    }
    else if ((x<0 && x!=0)&& (y>0 && y!=0))
    {
        printf("\nThe coordinate point (%d,%d) lies in the Fourth Quadrant ",x,y);

    }
    else{
        printf("\nSomething is worng ...\n");
    }
    
    
}