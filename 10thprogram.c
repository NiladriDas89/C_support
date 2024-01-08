#include<stdio.h>
#include<string.h>
void main(){
    char ch[100];
    fgets(ch,100,stdin);
    int occ=0,cha=0,i=0;
    for ( i; ch[i]!='\0'; i++){ 
if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= '0' && ch[i] <= '9')){
 
 cha++;
 //break;
}
    else{
    occ++;}
   // break; } 
    
    }
    printf("\n%d\n",cha-1);
    printf("%d",occ-1);}
