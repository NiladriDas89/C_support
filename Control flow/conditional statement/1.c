#include<stdio.h>
#include<stdlib.h>

void mme(int a, int b);//every time did decleare the prototype of the function , that after go to build the function , reason is it can be through the error ;


void main(){
int a,b;
scanf("%d %d",&b,&a);
mme(a,b);

}


void mme(int a, int b){
    if(a==b){
        printf("The number are equal ");
    }
    else if (a<b)
    {
        printf("\nNumber are not equal , Max number is %d\n",b);
    }else if(a>b){
        printf("\nNumber are not equal ,Max number is %d\n",a);
    }else{
        printf("Somethig is wrong........\n");
        exit(0);
    }

    

}