/* Write a C program that accepts two integers and checks whether either one of them is 5 or their sum or difference is 5. If any of these conditions are met, the program returns true. Otherwise, it returns false.
Expected Output:

1
0
1*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main(){
 int Numb,sum,num;
 scanf("%d %d",&Numb,&num);

 if (Numb == 5 || num == 5 || Numb + num == 5 || abs(Numb - num) == 5){
    printf("%d",true);
 }
 else{
    printf("%d",false);
 }
 




}