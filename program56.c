#include<stdio.h>

int EvenDisplay(int iNo)
{
    
    int iCount=0;

    if(iNo <0)
    {
        iNo= -iNo;
    }
    
    while (iNo>0)
    {
    
    iNo =iNo /10;
    iCount++;
    }
    return iCount;
}

int main()
{
    int iValue =0, iRet =0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    EvenDisplay(iValue);

    printf("Number of Digits are: %d\n",iRet);


    return 0;
}