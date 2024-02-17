/*Write a program in C to show the simple structure of a function.
Expected Output :

The total is :  11 */

#include<stdio.h>
void sum(int num1,int num2);

int main(){
    int a,b; 
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    return 0;
}






void sum(int num1,int num2){
    int tmp =num1+num2;
    printf("the total is: %d",tmp);
}
