#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
int x,y,z;
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);

if (y<x&&z<y)
{
    printf("%d",true);
}
else{
    printf("%d",false);
}
}