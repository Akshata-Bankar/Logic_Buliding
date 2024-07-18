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
            int SumDigits(int iNo)
            {
                int iCount=0;
                  while(iNo!=0)
                    {
                        iSum=iSum+idigit;
                        iNo=iNo/10;
                    }
                    return iSum;
                }
            void DisplayDigitSum()
            {
                int i=0 ,iRet=0;
                for(i=0; i<iSize;i++)
                {
                    iRet=SumDigits(Arr[i]);
                    cout<<Arr[i]<<""<<iRet<<"is:"<<endl;
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
    

    aobj->DisplayDigitCount();

    delete aobj;
    
    return 0;
}
