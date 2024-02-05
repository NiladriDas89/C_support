/*Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/
#include<stdio.h>
#include<stdlib.h>


void main(){
    printf("---Two Integers And Check Whether They Are Equal Or Not--- \n");
    int a,h;
     
    printf("Enter the value :\t");
    scanf("%d",&a);
    printf("Which statemet in want ot compare : \n1 for switch or 2 for if else\n");
    scanf("%d",&h);
    
    if (h==1)
    {   int remainder=((a%4==0)&&((a%400==0)||(a%100!=0)));

   switch(remainder)
   {

   case 1:
     printf("Leap Year");
     break;

   case 0:
     printf("Not Leap Year");
     break;

   default:
     printf("Invalid");
     break;

   
    }}
    else if (h==2)
    {
          if (a % 400 == 0) {
      printf("%d is a leap year.",a);
   }
 
   else if (a % 100 == 0) {
      printf("%d is not a leap year.", a);
   }
 
   else if (a % 4 == 0) {
      printf("%d is a leap year.", a);
   }
 
   else {
      printf("%d is not a leap year.", a);
   }
    }else{
        printf("Eror!");
        exit(h);
    }
    
    



}