#include<stdlib.h>
#include<stdio.h>

void largest();


void main(){
largest();



}
void largest(){
    int a[2];
printf("\nGive Number: ");
for (int i = 0; i <=2 ; i++)
{
    
    scanf("%d",&a[i]);
}

for (int i = 0; i <=2; i++)
{
    if (a[i]<a[i+1])
    {
        int tmp=a[i+1];
        a[i+1]=a[i];
        a[i]=tmp;
    }
    
}
printf("The max number is %d",a[0]);
}

