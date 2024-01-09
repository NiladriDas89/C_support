/*Write a program in C to copy one string to another string*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],arr[100]={"Hello"};
    printf("%s\n",arr);
    printf("Enter your string:\t");
    gets(str);
    strcpy(str,arr); 
    printf("Copied string is :%s \n",arr);
    return 0;
}
