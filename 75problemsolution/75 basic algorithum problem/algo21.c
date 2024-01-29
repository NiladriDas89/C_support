#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int num;
    scanf("%d",&num);
    (num % 2 == 0 || num % 10 == 0)?printf("%d",true):printf("%d",false);

}