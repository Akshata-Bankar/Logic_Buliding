#include <iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T>* next;
};


template<class T>
class SinglyCL
{
    private:
        struct node<T>* First;
        struct node<T>* Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template<class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template<class T>
void SinglyCL<T>::Display()
{
    if ((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    } 
    struct node<T>* temp = First;
    do
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    } while (temp != Last->next);
    cout << "NULL" << endl;
}

template<class T>
int SinglyCL<T>::Count()
{
    
    if ((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    
    int count = 0;
    struct node<T>* temp = First;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != Last->next);
    return count;
}

template<class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct node<T>* newn = NULL;

    newn = new node<T>;

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

template<class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct node<T>* newn = NULL;

    newn = new node<T>;

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

template<class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    int i=0;
    struct node<T>* temp;
    struct node<T>* newn=NULL;
    
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

        newn=new node <T>;
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

template<class T>
void SinglyCL<T>::DeleteFirst()
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

template<class T>
void SinglyCL<T>::DeleteLast()
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
       struct node<T>* temp=First;
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

template<class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{

    int i=0;
    struct node<T>* temp1=NULL;
    struct node<T>* temp2=NULL;
    
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
    SinglyCL <int> *iobj=new SinglyCL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;

    iobj->InsertLast(101);
    iobj->InsertLast(121);
    iobj->InsertLast(151);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;

    iobj->InsertAtPos(105,3);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;


    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;


    iobj->DeleteAtPos(3);
    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements: " << iRet << endl;



    return 0;
}