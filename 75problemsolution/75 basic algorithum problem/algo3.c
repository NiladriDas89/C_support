/* Write a C program that checks two given integers and returns true if at least one of them is 30 or/ 
if their sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, /
the program will return true./
Expected Output:/
1/
1/
0*/
#include<stdio.h>

void main(){
    
    int j,k;
    printf("Enter your number:\t");
    scanf("%d",&k);
    printf("Enter your number:\t");
    scanf("%d",&j);
    printf("%d",equals(j,k));

}

int equals(int j,int k){
 int sum=j+k;
 
 return(j==30||k==30 ||sum==30);
 

 
 }