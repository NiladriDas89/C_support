#include<stdio.h>


struct emp
{
    long int id;
    int sala;
    int hours;
    
};



void main(){
    struct emp var;
    printf("ID NUM: ")  ;
    scanf("%ld",&var.id);
    printf("Input the working hrs:");
    scanf("%d",&var.hours);
    printf("Salary amount/hr: ");
    scanf("%d",&var.sala);
    printf("%d %d",var.sala,var.id);

    
}