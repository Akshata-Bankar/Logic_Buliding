/*
Accept number as No
search all its factors 
perform addition of all the factors
If additon is same as No
then Display as No is perfect number
otherwise
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    int iCnt =0,iSum=0;

    if(iNo<0)   //updator
    {
        iNo= -iNo; //-(-28)
    }
    for(iCnt=1;iCnt<=iNo/2; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    if(iSum==iNo)
    {
        return true;

    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet =CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf("%d is not perfect number \n",iValue);

    }
    return 0;
}