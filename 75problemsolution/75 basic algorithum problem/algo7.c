#include<stdio.h>
#include<stdbool.h>
void main(){
int n;
scanf("%d",&n);
int i=100;
int n2=200;
for(;i<=n2;i++)
if(n==i){
printf("%d",true);
break;
}else{
    printf("%d",false);
    break;
}



}