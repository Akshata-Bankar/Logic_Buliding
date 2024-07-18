//Input=5
//output =
#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=4; iCnt++)
    {
        printf("*\t");
        
    }
    printf("\n");
    for(iCnt=1;iCnt<=4; iCnt++)
    {
        printf("*\t");
        
    }
    printf("\n");
    for(iCnt=1;iCnt<=4; iCnt++)
    {
        printf("*\t");
        
    }
    printf("\n");
   
}
int main()
{
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}