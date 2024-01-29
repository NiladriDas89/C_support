/*Write a C program to check a given array (length will be at least 2) of integers and return true if there are two values 15, 15 next to each other.
Expected Output:

1
0
1
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){

int num[2];
for (int i = 0; i <=2 ; i++)
{
    scanf("%d",&num[i]);
    
    
}
for (int i = 0; i <=2; i++)
{
    if (num[i]==num[i+1] && num[i]==15)
    {
        return printf("%d",true);
        }
   else{
    return printf("%d",false);
   }
    
}


return 0;
}