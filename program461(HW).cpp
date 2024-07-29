#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};


template<class T>
class DoublyLL
{
    private:
        struct node<T> * First;
        int iCount;
        

    public:
        DoublyLL();

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
DoublyLL <T>::DoublyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template<class T>
void DoublyLL<T>::Display()
{
    struct node<T> * temp=First;

    while(temp !=NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template<class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template<class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct node<T> * newn=NULL;

    newn=new node<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        //(First)->prev=newn;
        First=newn;
    }
    iCount++;
}

template<class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct node<T> * newn=NULL;
    struct node<T> * temp=NULL;

    newn=new node<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        struct node<T> * temp=First;
        while(temp->next !=NULL)
        {
            temp=temp->next;
            
        }
        temp->next=newn;
        newn->prev=temp;
    }
    iCount++;

}

template<class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    struct node<T> * newn=First;
    int i=0;
    struct node<T> * temp=NULL;

    if((iPos<1) || (iPos>iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if (iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp=First;

        newn=new node<T>;

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        for(i=1; i<iPos-1 ;i++)
        {
            temp=temp->next;
        }
        newn->next =temp->next;
        //temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp; 

        iCount++;
    }
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    struct node<T> * temp =First;
    
   if(First==NULL)
   {
    cout<<"LL is empty\n";
    return;  
   }
   else if(First->next==NULL)
   {
        delete First;
        First=NULL;
   }
   else
   {
        First=First->next;
        delete temp;
        First->prev=NULL;
   }
   iCount--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
    struct node<T> * temp=First;
   
   if(First==NULL)
   {
    cout<<"LL is empty\n";
    return;  
   }
   else if(First->next==NULL)
   {
        delete First;
        First=NULL;
   }
   else
   {
    while(temp->next->next !=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
        
   }
   iCount--;

}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    
    struct node<T> * temp1=NULL;
    int i=0;
    struct node<T> * temp2=NULL;

    if((iPos<1) || (iPos>iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if (iPos==iCount+1)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> * temp1=First;
        int i=0;

        for(int i=1; i<iPos-1 ;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next->prev;
        delete temp2;
       
        iCount--;
    }
}


int main()
{
    DoublyLL <int>*iobj=new DoublyLL<int>();
    int iRet=0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(151);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;

    iobj->InsertAtPos(15,2);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;


    iobj->DeleteAtPos(2);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are:"<<iRet<<endl;

    return 0;
}