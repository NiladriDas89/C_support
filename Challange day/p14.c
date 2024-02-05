/*Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number*/
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
    //int difference = a > 0;
    if (h==1)
    {
        switch (a > 0)
        {
        case 1: 
            printf("positive Number");
            break;
        default:
        printf("Negative Number");
        }
    }
    else if (h==2)
    {
        if (a>0)
        {
            printf("Positive Number");
        }else{
            printf("Negative Number");
        }
        
    }else{
        printf("Eror!");
        exit(h);
    }
    
    



}
