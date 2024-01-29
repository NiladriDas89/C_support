/* Write a C program to check if two given non-negative integers have the same last digit.
Expected Output:

0
1
1
0   */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
int a,b;
scanf("%d %d",&a,&b);

if(a&&b>=0){

(a%10)==(b%10)?printf("%d",true):printf("%d",false);
}
else{
    exit(0);
}

}
