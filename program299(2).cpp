#include<iostream>
using namespace std;

void SumFactors(int iNo)
{
    static int i=1;
    static int iSum=0;

    if(i<=(iNo/2))
    {
        if(iNo % i== 0) 
        {
            iSum=i+iSum;
            cout<<iSum<<endl;
        }
        i++;
        SumFactors(iNo);
    }
}
int main()
{
    int iValue=0 ,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    SumFactors(iValue);

    
    return 0;
}