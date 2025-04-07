#include<stdio.h>
#include<stdlib.h>
#include<math.h>


typedef struct self_structure
{
    void *data;
    struct self_structure *Next;

}self_structure;



self_structure *LInkedlist(size_t si){
    if (!si)
    {
        return NULL;
    }
    self_structure *node=(self_structure*)malloc(sizeof(self_structure));
    if (!node) return NULL;
    node->Next=NULL;
    self_structure *TMpnode=node;

    
    

    for (size_t i = 0; i < si; i++)
    {
        self_structure *newnode=(self_structure*)malloc(sizeof(self_structure));
        if (!newnode) return NULL;
        newnode->Next=NULL;
        TMpnode->Next=newnode;
        TMpnode=newnode;
    }
    
    return node;

    
}