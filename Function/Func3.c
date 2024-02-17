#include<stdio.h>
void swap(int a,int b);
void main(){
    int numberone,numbertwo;
    printf("\t:Enter the Two number: \n");
    scanf("%d %d",&numberone,&numbertwo);
    printf("\nBEOFRE THE SWAP VALUE IS : %d %d",numberone,numbertwo);
    swap(numberone,numbertwo);
}
void swap(int a,int b){
    int tmp= a;
    a = b;
    b = tmp;
    printf("\nAFTER THE SWAP VALUE IS : %d %d",a,b);
}