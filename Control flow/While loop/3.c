#include<stdio.h>
void main(){
    int range,i=0,tmp =0;
    printf("Enter the range :");
    scanf("%d",&range);
        while (i<=range)
        {
            printf("%d",i);
            tmp+=i;
            
            i++;
            
            
        }
        printf("%d\n",tmp);


}