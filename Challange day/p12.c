/*Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/
#include<stdio.h>
#include<stdlib.h>


void main(){
    printf("---Two Integers And Check Whether They Are Equal Or Not--- \n");
    int a,b,h;
     
    printf("Enter the value :\t");
    scanf("%d %d",&a,&b);
    printf("Which statemet in want ot compare : \n1 for switch or 2 for if else\n");
    scanf("%d",&h);
    int difference = a - b;
    if (h==1)
    {
        switch (difference)
        {
        case 0: 
            printf("Both are equal");
            break;
        default:
        printf("Both are not equal");
        }
    }
    else if (h==2)
    {
        if (a==b)
        {
            printf("Both are equal");
        }else{
            printf("Both are not equal");
        }
        
    }else{
        printf("Eror!");
        exit(h);
    }
    
    



}