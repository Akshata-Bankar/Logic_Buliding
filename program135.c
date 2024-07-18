#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] ,int iSize, int iNo)
{
    int i=0;
    bool bFlag =false;

    for(i =0;i<iSize;i++)
    {
        if((Arr[i]) == iNo)
        {
           bFlag=true;
           break;
        }
    }
    return bFlag;
} 

int main()
{
    int iCount =0 ,i =0,iRet =0 , iValue=0;
    int *Brr =NULL;
    bool bRet =false;

    printf("Enter the elements that you want : \n");
    scanf("%d",&iCount);

    Brr =(int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");

    bRet= Search(Brr,iCount,iValue);
    if (bRet=true)
    {
    printf("Enter the numbers is search are: %d\n");
    }
    else{
        printf("Number is not here");
    }


    free(Brr);
    return 0;
}