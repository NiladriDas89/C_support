/*
Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
Expected Output:

1
0
1 
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
int arr[5];
for ( int n=0; n<=5; n++){
    scanf("%d",&arr[n]);
}

for (int n=0;n<=5;n++)
{
 
 if (arr[n]==1 && arr[n+1] ==2 && arr[n+2] == 3)
 {  
    //return 1;
    printf("%d",true);
 }
 else{
    //return 0;
    printf("%d",false);
 }
 
}


}