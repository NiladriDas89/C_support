#include<stdio.h>
void main(){
 char arr[100];int size;
 gets(arr);
 for ( int i = 0; arr[i] !='\0'; i++){
    size=i;
    if (arr[size] == ' ' || arr[size] == '\t' || arr[size] == '\n')
    { //nilsize=-1;
        printf("%d",size); 
    }
    
    }}
    
    

