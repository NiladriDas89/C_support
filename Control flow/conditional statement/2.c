#include<stdio.h>
#include<stdlib.h>
int positive_or_negative(int a);
int even_or_odd(int a);

void main(){
int a;
scanf("%d",&a);
positive_or_negative(a);
even_or_odd(a);


}
int even_or_odd(int a){
        if (a%2==0)
        {
            printf("\nThe number %d is Even.",a);
        }
        else if (a<=0&&a==0)
        {
            exit(a);
        }else{
            printf("\nThe Number is %d Odd",a);

        }
        return 0;
        
        
}

int positive_or_negative(int a){
    if (a>=0)
    {   printf("\nThe number is %d Positive .",a);
        return 1;
    }else if(a==0){
        printf("\nThe number is %d",a);
    }else{
        printf("\nThe number is %d Negative",a);
    }
    
    
    return 0;
}