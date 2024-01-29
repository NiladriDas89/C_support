#include<stdio.h>
#include<stdbool.h>


//if a%b==0 then true & a/b=c if b*c=a then true,here b are represented the 2 number  one is 7 and another is 3 if both are divisible then true
void main(){

int number,a=true,b =false;
int n2=7 ,n1= 3;

printf("Enter the number:\t ");
scanf("%d",&number);
((number%(n1))==0)||((number%(n2))==0)?printf("%d\n",a):printf("%d\n",b);






}