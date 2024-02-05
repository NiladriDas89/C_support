/*Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.*/
#include<stdio.h>
#include<stdlib.h>
// average =150,tall=>165 & <150=dwarf
void main(){
 int hight;
 printf("Enter your height:\t");
 scanf("%d",&hight);
 
 if (hight<150)
 {
    printf("Dwarf");
 }
 else if (hight>165)
 {
    printf("Tall");
 }
 else if (hight=150)
 {
    printf("average");
 }
 
 
 








}