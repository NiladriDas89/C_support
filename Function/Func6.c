#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
long toBin(int);
void main(){
    int a;
    scanf("%d",&a);
    printf("%d",toBin(a));
}

long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}