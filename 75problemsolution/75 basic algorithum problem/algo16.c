/*Write a C program to check if a triple is present in an array of integers or not. 
If a value appears three times in a row in an array it is called a triple.
Expected Output:

0
0
1
*/
#include<stdio.h>
#include<stdbool.h>

void main(){
int ab[5],count=0;
for ( int i = 0; i <=5 ; i++)
{
    scanf("%d",&ab[i]);
    
}

for (int i = 0; i <=5 ; i++){
    if (ab[i]==ab[i+1])
    {
        count++;
        if (count<=3)
        {
            printf("%d %d",ab[i],true);
        }
        
    }
    
}





}