//count only captil number
#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)  
{
    bool bFlag =false;
    while(*str !='\0')
    {
        if(*str == 'w') //case sensitive
        {
            bFlag=true;
            break;;
        }
        str++;
    }
    return bFlag; 
}
int main()
{
    char Arr[20];
    bool bRet=false;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet=CheckOccurance(Arr);      //strlenX(100)

    if(bRet ==true)
    {
        printf("w is present in string \n");
    }
    else{
        printf("w is not present in string\n");
    }
    

    return 0;
}