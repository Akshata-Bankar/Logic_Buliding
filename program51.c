#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;

    while(iNo >0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;

    printf("ENter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}
//Time complexity=n~number which are number digit in input