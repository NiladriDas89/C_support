/*
Write a C program to check if two or more nonnegative integers have the same rightmost digit.
Expected Output:

1
1
0
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main(){
int a,b;
scanf("%d %d",&a,&b);
(a%10==b%10||b%10==a%10)?printf("%d",true):printf("%d",false);
}