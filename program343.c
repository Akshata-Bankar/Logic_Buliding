#include<stdio.h>
#include<stdlib.h>

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
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }

}
void InsertLast(PPNODE First,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        temp=*First;
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp ->next =newn;

    }
}

void Display (PNODE First)
{
    while(First !=NULL)
    {
        printf("| %d|->",First ->data);
        First=First ->next;

    }
    printf("NULL\n");

}

int Count(PNODE First)
{
    int iCnt=0;

    while(First !=NULL)
    {
        iCnt++;
        First=First ->next;

    }
    return iCnt;

}

int main()
{
    PNODE Head =NULL;
    int iRet=0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);
    iRet=Count(Head);

    printf("Number of elements are:%d\n",iRet);

    return 0;
}

/*
    INSERTFIRST
        1:Allocate memory for node
        2:Intialise the node
        3:Check wheter LL is emptyu or not
        4:If LL is empty store the adress of new node in the Heap pointer through First
        5:Otherwise store the adress of old first in the First node 

*/
