/*Write a C program to display multiple variables.
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;*/

#include<stdio.h>

void main(){
    
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 87;
    unsigned long ux = 2541567890;
    printf("a+c=%d\nx+c=%f\ndx+x=%f\ndx+ax=%ld\na+x=%f\ns+b=%d\nax+b=%ld\ns+c=%hd\nax + c = %ld\nax + ux = %lu\n",a + c,x+c,dx+x,((int)dx)+ax,a+x,s+b,ax+b,s+c,ax+c,ax+ux);
    printf("%c",c);



}