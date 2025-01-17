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
            void CalculateDigits()
            {
                int i=0;
                int iCount=0;

                for (i=0;i<iSize; i++)
                {
                    Arr[i]=Arr[i];
                    while(Arr[i]!=0)
                    {
                        iCount++;
                        Arr[i]=Arr[i]/10;
                    }
                    cout<<Arr[i]<<"contains"<<iCount<<"digits in it"<<endl;
                    iCount=0;

                }
            }
        };

int main()
{
    int iLength =0;

    cout<<"Enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

     ArrayX *aobj=new ArrayX(iLength);       //Dyanamic object creation
   
    aobj->Accept();
    aobj->Display();
    

    aobj->CalculateDigits();

    delete aobj;
    
    return 0;
}
