#include<stdio.h>

void DisplayOddDisplay(int iNo)
{
    
    int iDigit=0 iCount=0;

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
    {
    printf("%d\n",iDigit);
    }
    }
    
}

int main()
{
    int iValue =0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayOddDisplay(iValue);

    


    return 0;
}