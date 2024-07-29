#include<stdio.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//NODE,*PNODE,**PPNODE; Also we can use



int main()
{
    PNODE Head =NULL;

    return 0;
}