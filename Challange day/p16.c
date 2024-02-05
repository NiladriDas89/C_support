/*Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.*/
#include<stdio.h>
#include<stdlib.h>


void main(){
    printf("---You are eligible for casting your vote--- \n");
    int a,h;
     
    printf("Enter your age :\t");
    scanf("%d",&a);
    printf("Which statemet in want ot compare : \n1 for switch or 2 for if else\n");
    scanf("%d",&h);
    int difference = a >=18;
    if (h==1)
    {
        switch (difference)
        {
        case 1: 
            printf("Congratulation! You are eligible for casting your vote");
            break;
        default:
        printf("You are not eligible for casting your vote");
        }
    }
    else if (h==2)
    {
        if (a>=18)
        {printf("Congratulation! You are eligible for casting your vote");
            
        }else{
            printf("You are not eligible for casting your vote");
        }
        
    }else{
        printf("Eror!");
        exit(h);
    }
    
    



}