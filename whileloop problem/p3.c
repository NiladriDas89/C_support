// Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

#include<stdio.h>
#include<stdlib.h>
void main (){
    int num=1,prod=1;
    while (num<=5)
    {   prod*=num;
    num++;
    printf("%d\n",prod);
    }
//    printf("%d",prod);
    
    
    

}