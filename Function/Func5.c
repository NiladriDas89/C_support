#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
/*Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :*/
void serisesum(int num);

void main(int number){
printf("\n:Enter Your Number serise:\n");
printf("\t\n===Entering 0 exits! Choose other values.===\n");
serisesum(number);

}
void serisesum(int num){
    
    int tmp=0;
    while (num)
    { if(num!=0){
        scanf("%d",&num);
        system("cls");
        tmp+=num;
        }
        else{
            
            exit(num);
            }
        
    }
    printf("Your serise of enter number of sum is: %d", tmp);
}