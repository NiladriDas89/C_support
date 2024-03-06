#include<stdio.h>
#include<stdlib.h>

struct  name
 {
    int data;
    struct name *nextnode;
 };
void main(){
struct name *head=NULL;
struct name *tail=NULL;
head=(struct name*)malloc(sizeof(struct name));
tail=(struct name*)malloc(sizeof(struct name));

head->data=1000;
head->nextnode=tail;
tail->data=7800;
tail->nextnode=NULL;
while (head!=NULL)
{
    printf("%d\n",head->data);
    head=head->nextnode;
}


 }