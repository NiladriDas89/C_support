#include<stdio.h>

void main(){
int area, peri,w,l;
printf("Enter the Height & width:");
scanf("%d %d",&l,&w);
area=l*w;
peri=2*(l+w);
printf("Area is %d & perimeter is %d:",area,peri);

}