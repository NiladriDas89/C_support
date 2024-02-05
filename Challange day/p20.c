/* Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant*/

#include<stdio.h>
#include<stdlib.h>
void main(){
int num,num1;
scanf("%d %d",&num,&num1);
if (num&&num1>0)
{
    printf("1st Quadrant");
}else if(num&&num1<0){
    printf("3rd Quadrant");
}else if(num&&num1==0){
    printf("lies at the Origin");
}
else if (num1<0&&0>num)
{
    printf("2nd Quadrant");
}else if (num1>0&&0<num)
{
    printf("4th Quadrant");
}






}