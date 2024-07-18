#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int*Arr;
        int iSize;

        ArrayX(int No)
        {
            cout<<"Inside constructor"<<endl;
            iSize=No;
            Arr=new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the Elements :"<<endl;
            for(i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
            
        }
};

int main()
{
    int iLength =0;
    cout<<"Enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj((iLength));  //static memory
    
    return 0;
}

