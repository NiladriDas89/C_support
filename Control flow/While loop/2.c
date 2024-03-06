#include<stdio.h>
#include<stdlib.h>

void main(){
 int sum=0,usr;
 
    
    while (usr!=0)
    {   scanf("\n%d\n",&usr);
         sum=sum+usr;
        while (usr==0||usr<0)
        {   
        exit(0);
        }
        printf("\n%d\n",sum);

    }



}