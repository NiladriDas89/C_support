#include<stdio.h>

void oddoreven(int numberone);

void main(int ab){
printf("Enter your number: ");
scanf("%d",&ab);
printf("\nChecking these number are odd or even : %d\n",ab);
oddoreven(ab);
}

void oddoreven(int numberone){
(numberone%2==0)?printf("\nThe number %d is Even",numberone):printf("\nThe number %d is Odd",numberone);
}