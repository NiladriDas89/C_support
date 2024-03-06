#include<stdlib.h>
#include<stdio.h>
void lep(int a);
void check(int a);

void main(){
int age,year;
printf("Enter your age & Year: \n");
scanf("%d %d",&age,&year);
check(age);
lep(year);

}


void check(int a){
    if (a>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");
    }else{
        printf("You are not eligible for casting your vote.\n");
    }
  //  return 0;
}
void lep(int a){
((a%4==0) && ((a%400==0) || (a%100!=0)))?printf("\n%d is Leap year\n",a):printf("%d it's not leep year\n",a);
//return 0;

}