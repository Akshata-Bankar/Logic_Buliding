#include<iostream>
using namespace std;

//Approach 3:Using for recurssion

void Display(int iNo)
{
    static int i=1;

    if(i<=iNo)
    {
        cout<<"*"<<endl;
        i++;
        Display(iNo);
    }
}
int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;
    Display(iValue);

    cout<<"End of application"<<endl;
    return 0;
}