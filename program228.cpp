#include<iostream>
using namespace std;

class ArrayX
{
    private :
        int*Arr;
        int iSize;

    public:
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
            int i=0;
            cout<<"Enter the elements :"<<endl;
            for(i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }
            public:
            void Display()
            {
                int i =0;
                cout<<"Elements are:"<<endl;
                for(i=0;i<iSize; i++)
                {
                    cout<<Arr[i]<<endl;
                }
            }
            float Average()
            {
                int i=0,iSum =0;
                float fRAns=0;
                for(i=0; i<iSize; i++)
                {
                 iSum =iSum +Arr[i];

                }
                fAns= (iSum/iSize);
            }
        };

int main()
{
    int iLength =0;
    float fRet=0.0f;

    cout<<"Enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

    //Array aobj(iLenght);          static object creation
     ArrayX *aobj=new ArrayX(iLength);       //Dyanamic object creation
   
    aobj->Accept();
    aobj->Display();

    fRet=aobj->Average();

    cout<<"Avarage is:"<<fRet<<endl;
    
    return 0;
}