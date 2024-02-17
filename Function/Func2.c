/* Write a program in C to find the square of any number using the function.
Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00*/

#include<stdio.h>
#include<math.h>

void square(int b);

void main(){
int a;
scanf("%d",&a);

square(a);

}

void square(int b){
    float tmp = b *b;
    printf("The squre of %d is %f",b,tmp);

}
