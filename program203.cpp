#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }

    }

}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet=SumFactors(iValue);

    cout<<"Summation of Factors is:"<<iRet<<endl;

    return 0;
}