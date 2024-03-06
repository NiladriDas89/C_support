#include<stdio.h>
#include<stdlib.h>

struct st
{
    int data;
    struct st *newnode;
    
};


void main(){

struct st *head=NULL;

if (head!=NULL)
{   printf("Failed to initialize Node");
    return(1);
}
head=head->data;
head->data=head->newnode;







}