//count only captil number
#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt =0;

    while(*str !='\0')
    {
        if(*str == ' ')
        {
        iCnt++;
        }
        str++;
    }
    return iCnt; 
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);      //strlenX(100)

    printf("Number of spaces are: %d\n",iRet);

    return 0;
}