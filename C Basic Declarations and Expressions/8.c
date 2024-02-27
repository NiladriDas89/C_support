#include<stdio.h>

void main(){
    printf("Enter the Days of Number:");
    int days,year,week,day;
    scanf("%d",&day);
    printf("%d \n%d \n%d",day/365,((day%365)/7),(day-((day/365)*365)+((day%365)/7)*7));


}