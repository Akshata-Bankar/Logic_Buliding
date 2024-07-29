#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    if ((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    } 
    PNODE temp = First;
    do
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    } while (temp != Last->next);
    cout << "NULL" << endl;
}

int SinglyCL::Count()
{
    if ((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    int count = 0;
    PNODE temp = First;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != Last->next);
    return count;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        (Last)->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
    iCount++;
}

void SinglyCL::InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        (Last)->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        (Last)->next = First;
    }
    iCount++;
}

void SinglyCL::InsertAtPos(int No, int iPos)
{
    int i=0;
    PNODE temp;
    PNODE newn=NULL;
    
    if((iPos<1) || (iPos>iCount+1))
    {
        cout<<"Invalid Position";
        return;
    }

    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp=First;

        newn=new NODE;
        newn->data=No;
        newn->next=NULL;

        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    iCount++;

}

void SinglyCL::DeleteFirst()
{

    if ((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete(First);
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete(Last->next);
        (Last)->next=First;
    }
    iCount--;
    
}

void SinglyCL::DeleteLast()
{
   

    if ((First == NULL) && (Last == NULL))
    {
       return;
    }
    else if(First==Last)
    {
        delete(First);
        First=NULL;
        Last=NULL;
    }
    else
    {
       PNODE temp=First;
       while(temp->next !=Last)
       {
            temp=temp->next;
       }
            delete(Last);
            Last=temp;
            (Last)->next=First;
    }
    iCount--;
    
    
}

void SinglyCL::DeleteAtPos(int iPos)
{

    int i=0;
    PNODE temp1=NULL;
    PNODE temp2=NULL;
    
    if((iPos<1) || (iPos>iCount+1))
    {
        cout<<"Invalid Position";
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount+1)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1 -> next = temp2->next;
        delete(temp2);
        
    }
    iCount--;
    }

int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;

    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(151);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;

    obj.InsertAtPos(105,3);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;


    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;


    obj.DeleteAtPos(3);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Elements: " << iRet << endl;



    return 0;
}
