/*Write a program in C to read a string through keyboard and sort it.*/
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
printf("Enter your character");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int len=strlen(str);
for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);




return 0;
}