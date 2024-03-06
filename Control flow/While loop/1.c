#include<stdio.h>

void main(){
int a, ch;
printf("Enter the number:");
scanf("%d",&a);
scanf("%d",&ch);
if(ch==1){int i=1;
while (a>=i)
{
    printf("\n------------\n%d\n",i++);
}}else{
while ( a>=0)
{
    printf("%d\n",a--);
}}


}