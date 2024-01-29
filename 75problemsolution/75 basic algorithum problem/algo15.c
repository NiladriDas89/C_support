#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
/*Write a C program to count the number of 5's adjacent to each other in an array of integers. Consider the situation where the second 5 is actually a 6.
Expected Output:

1
2
1
*/
void main(){
int a , b,c=0 ;
int arr[5];
for (int i = 0; i <=5; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <=5; i++)
{
    if (arr[i]==5 && arr[i+1]==5||arr[i+1]==6)
    {
        c++;
        printf("%d",c);
    }else{
        c=1;
        printf("%d",c);
    }
    
}





}