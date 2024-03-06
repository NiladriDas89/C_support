#include<stdio.h>

void main(){
char x;
printf("Enter your data:");
scanf("%c",&x);
 if(x>='A'&& x<='Z'||x>='a'&&x<='z'){
printf("it's char");
}else if (x>='0'&&x<='9')
{
    printf("it's digit");
}else{
    printf("Speacial char");
}





}