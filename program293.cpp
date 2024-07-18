#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum=0;

    if(iNo!=0)
    {
        iSum=iSum+(iNo % 10);
        SumDigits(iNo/10);  
    }
    return iSum;
}
int main()
{
    int iValue=0 ,iRet=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;
    iRet=SumDigits(iValue);
    cout<<"Sum of digits are:"<<iRet<<endl;
    SumDigits(iValue);

    
    return 0;
}