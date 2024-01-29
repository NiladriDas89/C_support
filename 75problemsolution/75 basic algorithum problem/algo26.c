#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
     if (abs(num1 - num2) >= 20 || abs(num1 - num3) >= 20 || abs(num2 - num3) >= 20) 
    {   printf("%d",true);
        
    }
    else{
        printf("%d",false);
    }
    
    
    
}