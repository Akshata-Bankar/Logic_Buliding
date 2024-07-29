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

void InsertFirst(PPNODE First,int No)
{
    PNODE newn =NULL;

    //Step 1: Allocate dyanamic memory for New node
    newn=(PNODE)malloc(sizeof(NODE));

    //Step 2:Initialise the new node
    newn->data =No;
    newn->next =NULL;
    
    //step 3:Check is linked list is empty
    if(*First==NULL)
    {
        *First =newn;

    }
    else    //If linked list contains atleast one node in it
    {
        newn->next =*First;
        *First=newn;
    }

}


int main()
{
    PNODE Head =NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    return 0;
}