#include<stdio.h>
#include<math.h>

#define PI 3.14159

void main(){
    float red;
    printf("Enter the Redius :");
    scanf("%f",&red);
    float b =2*(PI*(red));
    float a=PI*(pow(red,2));
    printf("The circule of area is: %f\n perimeter is: %f",a,b);
    

}