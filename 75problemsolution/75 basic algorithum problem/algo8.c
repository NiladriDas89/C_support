/*Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and returns true if at 
least one of them is within the range. 
If none of the integers are within the range, the program returns false.
Expected Output:*/

#include<stdio.h>
#include<stdbool.h>

void main(){
    int n1,n2,n3,range=20,range2=50;
    printf("Enter the your three number :=\t");
    scanf("%d %d %d",&n1,&n2,&n3);
    (n1 >= 20 && n1 <= 50) || (n2 >= 20 && n2 <= 50) || (n3 >= 20 && n3 <= 50)?printf("%d",true):printf("%d",false);

    
}