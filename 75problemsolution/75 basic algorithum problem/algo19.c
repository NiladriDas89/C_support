#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int num;
    scanf("%d",&num);
    (num % 13 == 0 || num % 13 == 1)?printf("%d",true):printf("%d",false);

}