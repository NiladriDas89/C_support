/*Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
Expected Output:

1
1
0*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    
    int j;
    printf("Enter your number:\t");
    scanf("%d",&j);
    printf("%d",equals(j));

}

int equals(int j){
 
 
  if (abs(j - 100) <= 10 || abs(j - 200) <= 10)
        return 1;
    return 0;
 

 
 }