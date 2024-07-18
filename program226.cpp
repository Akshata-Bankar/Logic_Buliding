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
    cout<<"Enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj((iLength));  
    aobj.Accept();
    aobj.Display();

    fRet=aobj.Average();

    cout<<"Avarage is:"<<fRet<<endl;
    
    return 0;
}

//ky kru yar kahich samjena sir sahivtat tey samjty pn yar as dok band 
//pdly ky kru tyat chutya chi athavn yety ani hech ka yar abyas karyala 
//lagla tr dok band pdt kaaaa