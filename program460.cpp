#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
// Code of Singly Linear
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = First;

    newn = new nodeSL<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> * newn = NULL;
    int i = 0;
    struct nodeSL<T> * temp;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else 
    {
        temp = First;
        
        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1;
    struct nodeSL<T> * temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp1 = First;

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Circular
//
/////////////////////////////////////////////////////////////
template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T>:: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is emprty\n";
        return;
    }

    cout<<"<=> ";
    do
    {
        cout<<"| "<<First->data <<"| <=> ";
        First = First -> next;
    }while(Last -> next != First);

    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last ->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;    
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeDC<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        First = First -> next;
        delete Last->next;
        First -> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        Last = Last -> prev;
        delete First -> prev;

        Last -> next = First;
        First -> prev = Last;
    }
    iCount--;    
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Liear
//
/////////////////////////////////////////////////////////////

    // Add your code here

/////////////////////////////////////////////////////////////
//
// Code of Singly Circular
//
/////////////////////////////////////////////////////////////

    // Add your code here

/////////////////////////////////////////////////////////////
//
// Code of Stack
//
/////////////////////////////////////////////////////////////

    // Add your code here


/////////////////////////////////////////////////////////////
//
// Code of Queue
//
/////////////////////////////////////////////////////////////

    // Add your code here
//////////////////////////////////////////////////////////////////

//code of doublly linear


template<class T>
struct nodeDL
{
    T data;
    struct nodeDL<T> *next;
    struct nodeDL<T> *prev;
};


template<class T>
class DoublyLL
{
    private:
        struct nodeDL<T> * First;
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
    struct nodeDL<T> * temp=First;

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
    struct nodeDL<T> * newn=NULL;

    newn=new nodeDL<T>;
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
    struct nodeDL<T> * newn=NULL;
    struct nodeDL<T> * temp=NULL;

    newn=new nodeDL<T>;
    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        struct nodeDL<T> * temp=First;
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
    struct nodeDL<T> * newn=First;
    int i=0;
    struct nodeDL<T> * temp=NULL;

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

        newn=new nodeDL<T>;

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
    struct nodeDL<T> * temp =First;
    
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
    struct nodeDL<T>* temp=First;
   
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
    
    struct nodeDL<T> * temp1=NULL;
    int i=0;
    struct nodeDL<T> * temp2=NULL;

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
        struct nodeDL<T> * temp1=First;
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

/////////////////////////////////////////////

//code os singlly Circular



template<class T>
struct nodeSC
{
    T data;
    struct nodeSC<T>* next;
};


template<class T>
class SinglyCL
{
    private:
        struct nodeSC<T>* First;
        struct nodeSC<T>* Last;
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
    struct nodeSC<T>* temp = First;
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
    struct nodeSC<T>* temp = First;
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
    struct nodeSC<T>* newn = NULL;

    newn = new nodeSC<T>;

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
    struct nodeSC<T>* newn = NULL;

    newn = new nodeSC<T>;

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
    struct nodeSC<T>* temp;
    struct nodeSC<T>* newn=NULL;
    
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

        newn=new nodeSC<T>;
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
       struct nodeSC<T>* temp=First;
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
    struct nodeSC<T>* temp1=NULL;
    struct nodeSC<T>* temp2=NULL;
    
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

//////////////////////////////////////////////////////////

//code of queue


template<class T>
struct nodeQ
{
    T data;
    struct nodeQ<T>* next;
};


template<class T>
class Queue
{
    private:
        struct nodeQ<T>* First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(T No);  // InsertFirst()
        int DeQueue();   // DeleteFirst()
};


template<class T>
Queue<T>:: Queue()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void Queue<T>::Display()
{
    cout<<"Elements of stack are : \n";
    struct nodeQ<T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
    cout<<"\n";
}

template<class T>
int Queue<T> ::Count()
{
    return iCount;
}

template<class T>
void Queue<T> ::EnQueue(T No)
{
    struct nodeQ<T>* newn = NULL;
    struct nodeQ<T>* temp = NULL;

    newn = new nodeQ<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
    iCount++;
}

template<class T>
int Queue<T> ::DeQueue()
{
    int iValue = 0;
    struct nodeQ<T>* temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;
        
        iCount--;
    }

    return iValue;
}
///////////////////////////////////////////////////
//code of stack


template<class T>
struct nodeS
{
    T data;
    struct nodeS<T>* next;
};


template<class T>
class Stack
{
    private:
        struct nodeS<T>* First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();
        void Push(T No);  // InsertFirst()
        int Pop();   // DeleteFirst()
};


template<class T>
Stack<T>:: Stack()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are : \n";
    struct nodeS<T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
    cout<<"\n";
}

template<class T>
int Stack<T> ::Count()
{
    return iCount;
}

template<class T>
void Stack<T> ::Push(T No)
{
    struct nodeS<T>* newn = NULL;

    newn = new nodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template<class T>
int Stack<T> ::Pop()
{
    return 0;
}


int main()
{
    // LL of integer
    cout<<"-------------- LinkdList of Integers --------------\n";

    SinglyLL<int> *iobj = new SinglyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertAtPos(105,5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;


    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of character
    cout<<"-------------- LinkdList of Chracters --------------\n";

    SinglyLL<char> *cobj = new SinglyLL<char>();

    cobj->InsertFirst('D');
    cobj->InsertFirst('F');
    cobj->InsertFirst('R');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertLast('E');
    cobj->InsertLast('Y');
    cobj->InsertLast('U');
    
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertAtPos('W',5);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteAtPos(5);
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of float
    cout<<"-------------- LinkdList of Floats --------------\n";

    SinglyLL<float> *fobj = new SinglyLL<float>();

    fobj->InsertFirst(90.78f);
    fobj->InsertFirst(78.99f);
    fobj->InsertFirst(67.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertLast(45.67f);
    fobj->InsertLast(54.78f);
    fobj->InsertLast(77.89f);
    
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertAtPos(88.56,5);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteAtPos(5);
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    // LL of double

    cout<<"-------------- LinkdList of Doubles --------------\n";

    SinglyLL<double> *dobj = new SinglyLL<double>();

    dobj->InsertFirst(90.78978);
    dobj->InsertFirst(78.99645);
    dobj->InsertFirst(67.9934);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertLast(45.67867);
    dobj->InsertLast(54.78534);
    dobj->InsertLast(77.89324);
    
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;


    dobj->InsertAtPos(88.56987,5);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

     iobj->DeleteFirst();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteLast();
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteAtPos(5);
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
     // LL of integer

    cout<<"....................................................................................................\n";
    cout<<"-------------- LinkdList of Integers --------------\n";

    DoublyCL<int> *idcobj = new DoublyCL<int>();
    int dcRet = 0;

    idcobj->InsertFirst(51);
    idcobj->InsertFirst(21);
    idcobj->InsertFirst(11);

    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    idcobj->InsertLast(101);
    idcobj->InsertLast(111);
    idcobj->InsertLast(121);
    
    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    idcobj->InsertAtPos(105,5);
    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    idcobj->DeleteFirst();
    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    idcobj->DeleteLast();
    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    idcobj->DeleteAtPos(5);
    idcobj->Display();
    dcRet = idcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    // LL of character
    cout<<"-------------- LinkdList of Chracters --------------\n";

    DoublyCL<char> *cdcobj = new DoublyCL<char>();

    cdcobj->InsertFirst('D');
    cdcobj->InsertFirst('F');
    cdcobj->InsertFirst('R');

    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    cdcobj->InsertLast('E');
    cdcobj->InsertLast('Y');
    cdcobj->InsertLast('U');
    
    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    cdcobj->InsertAtPos('W',5);
    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    cdcobj->DeleteFirst();
    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    cdcobj->DeleteLast();
    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    cdcobj->DeleteAtPos(5);
    cdcobj->Display();
    dcRet = cdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    // LL of float
    cout<<"-------------- LinkdList of Floats --------------\n";

    DoublyCL<float> *fdcobj = new DoublyCL<float>();

    fdcobj->InsertFirst(90.78f);
    fdcobj->InsertFirst(78.99f);
    fdcobj->InsertFirst(67.99f);

    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    fdcobj->InsertLast(45.67f);
    fdcobj->InsertLast(54.78f);
    fdcobj->InsertLast(77.89f);
    
    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    fdcobj->InsertAtPos(88.56,5);

    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    fdcobj->DeleteFirst();
    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    fdcobj->DeleteLast();
    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    fdcobj->DeleteAtPos(5);
    fdcobj->Display();
    dcRet = fdcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    // LL of double

    cout<<"-------------- LinkdList of Doubles --------------\n";

    DoublyCL<double> *ddcobj = new DoublyCL<double>();

    ddcobj->InsertFirst(90.78978);
    ddcobj->InsertFirst(78.99645);
    ddcobj->InsertFirst(67.9934);

    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    ddcobj->InsertLast(45.67867);
    ddcobj->InsertLast(54.78534);
    ddcobj->InsertLast(77.89324);
    
    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    ddcobj->InsertAtPos(88.56987,5);

    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    ddcobj->DeleteFirst();
    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    ddcobj->DeleteLast();
    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;

    ddcobj->DeleteAtPos(5);
    ddcobj->Display();
    dcRet = ddcobj->Count();
    cout<<"Number of elemensts are : "<<dcRet<<endl;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"....................................................................................................\n";
    cout<<"-------------- LinkdList of Integers --------------\n";

    SinglyCL<int> *iscobj = new SinglyCL<int>();
    int clRet = 0;

    iscobj->InsertFirst(51);
    iscobj->InsertFirst(21);
    iscobj->InsertFirst(11);

    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    iscobj->InsertLast(101);
    iscobj->InsertLast(111);
    iscobj->InsertLast(121);
    
    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    iscobj->InsertAtPos(105,5);
    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    iscobj->DeleteFirst();
    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    iscobj->DeleteLast();
    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    iscobj->DeleteAtPos(5);
    iscobj->Display();
    clRet = iscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    // LL of character
    cout<<"-------------- LinkdList of Chracters --------------\n";

    SinglyCL<char> *cscobj = new SinglyCL<char>();

    cscobj->InsertFirst('D');
    cscobj->InsertFirst('F');
    cscobj->InsertFirst('R');

    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    cscobj->InsertLast('E');
    cscobj->InsertLast('Y');
    cscobj->InsertLast('U');
    
    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    cscobj->InsertAtPos('W',5);
    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    cscobj->DeleteFirst();
    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    cscobj->DeleteLast();
    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    cscobj->DeleteAtPos(5);
    cscobj->Display();
    clRet = cscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    // LL of float
    cout<<"-------------- LinkdList of Floats --------------\n";

    SinglyCL<float> *fscobj = new SinglyCL<float>();

    fscobj->InsertFirst(90.78f);
    fscobj->InsertFirst(78.99f);
    fscobj->InsertFirst(67.99f);

    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    fscobj->InsertLast(45.67f);
    fscobj->InsertLast(54.78f);
    fscobj->InsertLast(77.89f);
    
    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    fscobj->InsertAtPos(88.56,5);
    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    fscobj->DeleteFirst();
    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    fscobj->DeleteLast();
    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    fscobj->DeleteAtPos(5);
    fscobj->Display();
    clRet = fscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    // LL of double

    cout<<"-------------- LinkdList of Doubles --------------\n";

    SinglyCL<double> *dscobj = new SinglyCL<double>();

    dscobj->InsertFirst(90.78978);
    dscobj->InsertFirst(78.99645);
    dscobj->InsertFirst(67.9934);

    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    dscobj->InsertLast(45.67867);
    dscobj->InsertLast(54.78534);
    dscobj->InsertLast(77.89324);
    
    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    dscobj->InsertAtPos(88.56987,5);
    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    dscobj->DeleteFirst();
    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    dscobj->DeleteLast();
    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

    dscobj->DeleteAtPos(5);
    dscobj->Display();
    clRet = dscobj->Count();
    cout<<"Number of elemensts are : "<<clRet<<endl;

   
    return 0;
}