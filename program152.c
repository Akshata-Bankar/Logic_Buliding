#include<stdio.h>
#include<stdbool.h>

bool ChecckCapital(char ch)
{
    if ((ch>='A') && (ch<='Z'))
    {
        return true;
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