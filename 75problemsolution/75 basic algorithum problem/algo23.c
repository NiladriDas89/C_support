#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
int a,b,c;
scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);

if (a==b+c||b==a+c||c==a+b)
{
    printf("%d",true);
}
else{
    printf("%d",false);
}
}