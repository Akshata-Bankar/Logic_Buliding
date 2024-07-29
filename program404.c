#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct  node NODE;
typedef struct  node* PNODE;
typedef struct  node** PPNODE;

int iCount(PNODE First,PNODE Last)
{
    int iCount=0;

    if((First==NULL)&& (Last == NULL))
    {
        return 0;
    }

    do
    {
       iCount++;
       First=First->next;
    } while ((First) !=Last->next);

    return iCount;
}

void Display(PNODE First,PNODE Last)
{
    if((First==NULL)&& (Last == NULL))
    {
        printf("LL is EMpty\n");
        return;
    }
    printf("<=>");
    do
    {
        printf("|%d| <=>",First->data);
        First=First->next;
    } while (First !=Last->next);
    printf("\n");
}

void InsertFirst(PPNODE *First,PPNODE *Last,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }
    (*Last)->next=*First;
   (*First)->prev=Last;

}


void InsertLast(PPNODE *First,PPNODE *Last,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL) && (*Last==NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        newn->prev=*Last;
        (*Last)->next=newn;
        *Last=newn;
    }
    (*First)->prev=Last;
    (*Last)->next=*First;

    
}






int main()
{
    PNODE Head=0;
    PNODE Tail=0;
    int iRet=0;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Number of elemensts are : %d\n",iRet);



    return 0;

}