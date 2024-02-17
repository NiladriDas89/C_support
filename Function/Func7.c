#include<stdio.h>
#include<stdlib.h>

void prime();

void main(){
    int ab;
    scanf("%d",&ab);
    prime(ab);
}
void prime(int n) {
    if (n <= 1) {
        printf("Not prime\n");
        return;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not prime\n");
            return;
        }
    }

    printf("Prime\n");
}
