#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt =0;
    int iCount=0;
    
    //  1           2           3
     for(iCnt =1; iCnt<iNo; iCnt++)
    {
       if((iNo % iCnt)==0)
       {
         iCount++;
       }
    }
    return iCount;
    
    
}
int main()
{
    int iValue =0, iRet=0;
    

    printf("Enter number : \n");
    scanf("%d ",&iValue);

    iRet=SumFactors(iValue);
    printf("Number of factors are: %d\n",iRet);

    return 0;
}