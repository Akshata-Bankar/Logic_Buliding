#include<stdio.h>
#include<stdbool.h>

//Input :11  No/2=5     iCnt=6
//Input :17  No/2=8     iCnt=9

//Input:10  No/2=5      iCnt=2
//Input:15  No/2=7      iCnt=3

bool CheckPrime(int iNo)
{
    int iCnt =0,iCount=0;
    

    if(iNo<0)   //updator
    {
        iNo= -iNo; //-(-28)
    }
    
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            
            break;
        }
    }
    if(iCnt>(iNo/2))
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet =CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not prime number \n",iValue);

    }
    return 0;
}