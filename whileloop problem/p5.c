/*Write a C program that generates a random number between 1 and 20 and asks the user to guess it.
 Use a while loop to give the user multiple chances until they guess the correct number.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main(){

    srand(time(NULL));
    int tar=rand()%20+1;
    int usr,attemp=0;
    printf("Guess the number between 1 and 20:\n");
    while(1){
        printf("Input your guess: ");
        scanf("%d",&usr);
        attemp++;
        if (usr==tar)
        {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attemp);
            break;
        }else {
            printf("Incorrect guess. Try again!\n");
        }
        
        

    }






}