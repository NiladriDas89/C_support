/*Write a C program that checks two given temperatures and returns true if one temperature is less than 0 
    and the other is greater than 100, otherwise it returns false.
Expected Output:

1
1
0*/

#include<stdio.h>
#include<stdbool.h>

void main(){
    

    int n,n2;
    printf("Enter the Tow temperature :\n");
    scanf("%d",&n);
    scanf("%d",&n2);

if(((n>=100)||(n<=0))||((n2>=100)||(n2<=0))){
printf("%d",true);
}
else{
    printf("%d",false);
}


}