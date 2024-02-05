/*Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/

#include<stdio.h>
#include<stdlib.h>


void main(){
    printf("---Two Integers And Check Whether They Are Equal Or Not--- \n");
    int a,h;
     
    printf("Enter the value :\t");
    scanf("%d",&a);
    printf("Which statemet in want ot compare : \n1 for switch or 2 for if else\n");
    scanf("%d",&h);
    int difference = a %2;
    if (h==1)
    {
        switch (difference)
        {
        case 0: 
            printf("Even Number");
            break;
        default:
        printf("Odd Number");
        }
    }
    else if (h==2)
    {
        if (a%2==0)
        {
            printf("Even Number");
        }else{
            printf("Odd Number");
        }
        
    }else{
        printf("Eror!");
        exit(h);
    }
    
    



}