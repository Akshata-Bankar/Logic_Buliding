#include<iostream>
using namespace std;

void SumFactors(int iNo)
{
    int i=1;
    int iSum=0;

    while(i<=(iNo/2))
    {
        if(iNo % i== 0) 
        {
            iSum=i+iSum;
            cout<<iSum<<endl;
        }
        i++;
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