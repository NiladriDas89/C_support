#include<stdio.h>
void main(){
 char arr[100];int size;
 gets(arr);
 for ( int i = 0; arr[i] !='\0'; i++){
 size=i+1;
 
 for (arr[size]!='\0';size>=0;size--){
    //size=i;*/
    printf("%c\n",arr[size]);
    break;
    }
    }
}