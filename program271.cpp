#include<iostream>
using namespace std;

//Approach 3:Using for recurssion

void Display()
{
    int i=1;

    if(i<=4)
    {
        cout<<"*"<<endl;
        i++;
        Display();
    }
    

}
int main()
{
    Display();


    return 0;
}