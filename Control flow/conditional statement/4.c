#include<stdio.h>
#include<stdlib.h>
void calclu_hight(int a);

void main(){
int a;
scanf("%d",&a);
calclu_hight(a);
}


void calclu_hight(int a){
if (a!=0&&a>0)
{
    if (a<150)
    {
        printf("This person is Dwarf");
    }else if (a==150)
    {
        printf("This person is Average Height ");
    }else if (a>=165)
    {
        printf("This person is Tall");
    }
    else{
        printf("Something is worng ");
    }
    
    
    
}
else{
    exit(0);
}

}