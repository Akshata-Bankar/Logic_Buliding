//Average of n number
#include<iostream>
using namespace std;

int main()
{
    int iLength =0,i=0;
    int *ptr=NULL;

    cout<<"ENter the elements that you want to store :"<<endl;
    cin>>iLength;

    ptr=new int[iLength];
    //ptr=(int *)malloc(sizeof(int) * iLength) //for c

    delete [] ptr;
    //free (ptr) //for c
    return 0;
}

