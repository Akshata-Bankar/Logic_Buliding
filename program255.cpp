#include<iostream>
using namespace std;

bool strcmpX(char *first,char *second)
{
    bool bFlag=true;

    while((*first !='\0')&&(*second !='\0'))
    {
        if(*first !=*second)
        {
            bFlag=false;
            break;
        }
        first++;
        second++;
    }
    return bFlag;

    
}
int main()
{   
    char Arr[30];
    char Brr[30];
    bool bRet=false;

    cout<<"Enter the first string:"<<endl;
    cin.getline(Arr,30);

    cout<<"Enter the second string:"<<endl;
    cin.getline(Brr,30);


    bRet=strcmpX(Arr,Brr);

    if(bRet== true)
    {
        cout<<"String are identical"<<endl;
    }
    else
    {

    }
    return 0;
}
