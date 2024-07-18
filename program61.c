#include<stdio.h>

int Count(int iNo)
{
    
    int iDigit=0, iCount=0;

    if(iNo <0)
    {
        iNo= -iNo;
    }
    
    while (iNo>0)
    {
    iDigit = iNo%10;
    
    if(iDigit %2 !=0)
    {
        iCount++;
    }
    return iCount;
    }
    
}

int main()
{
    int iValue =0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Count(iValue);
    return 0;
}