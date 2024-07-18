#include<stdio.h>

void CheckCapital(char ch)
{
    if ((ch>='0') && (ch<='9'))
    {
        printf("It is a digit\n")
    }
    else
    {
        return false;

    }
}
int main()
{
    char cValue;
    bool bRet =false;

    printf("Enter one character :\n");
    scanf("%c",&cValue);

    ChecckCapital(cValue);
    return 0;
}