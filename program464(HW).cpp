#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T>* next;
};


template<class T>
class Stack
{
    private:
        struct node<T>* First;
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
    struct node<T>* temp = First;

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
    struct node<T>* newn = NULL;

    newn = new node<T>;

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
    Stack<int> *iobj=new Stack<int>();
    int iRet = 0;

    iobj->Push(10);
    iobj->Push(20);
    iobj->Push(30);
    iobj->Push(40);

    iobj->Display();

    iRet = iobj->Count();

    cout<<"Number of elements in the stack are : "<<iRet<<"\n";
    
    return 0;
}