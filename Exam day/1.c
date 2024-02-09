/*6) WAP to take any 10 numbers (including positive and negative) from user. Perform the following tasks:
a) Count the positive numbers
b) Count the negative numbers
c) Count the numbers divisible by 3
d) Count the numbers divisible by both 3 and 2
*/


#include<stdio.h>
#include<stdlib.h>

void main(){

int arr[9],countpos=0,countneg=0,tmp=0,tmp2=0;
printf("Enter your 10 number serial wise :\t");
for (int i = 0; i < 10; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i < 10; i++)
{
    if(arr[i]<0){
        countneg++;

    }else{
        countpos++;
    }
    if (arr[i]%3==0)
    {
        tmp++;
    }else if(arr[i]%2&&3==0){
        tmp2++;
    }
    
    
}
printf(" The total %d numbers divisible by both 3 and 2\nThe total %d numbers divisible by 3\n",tmp2,tmp);
printf("There Total %d Negitaive numbers & %d positive number are present  \n",countneg,countpos);




}