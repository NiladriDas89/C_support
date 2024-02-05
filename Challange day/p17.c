/*Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
Test Data : -5
Expected Output :
The value of n = -1*/
#include<stdio.h>
#include<stdlib.h>


void main(){
    
    int a,b;
     
    printf("Enter the value :\t");
    scanf("%d",&a);
    if (a!=0){if(a>0){b=1;}else{b=-1;}}else{b=0;} 
    printf("%d %d",a,b);
    
    }
        
    

    
    



