//check wheter number is between 30 and 50 number...

#include<stdio.h>
#include<stdbool.h>
/*
Algorithm:
    Start
        accept one number as no
        if the number is greater than 30 and if is less than 50
        then display the msg as number is in range
        otherwise
        display the msg as number is not in range
    stop
*/

bool CheckRange(int iNo)
{
    if((iNo >=30) && (iNo=50))
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
    int iValue =0;
    bool bRet =false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet =CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d is in the range 30 and 50\n",iValue);
    }
    else{
        printf("%d isnot  in the range 30 and 50\n",iValue);
    }
    return 0;

}