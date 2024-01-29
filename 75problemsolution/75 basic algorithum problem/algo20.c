#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int num;
    scanf("%d",&num);
    (num % 3 == 0 || num % 7 == 0)?printf("%d",true):printf("%d",false);

}