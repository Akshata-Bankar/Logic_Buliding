//content Dyanamic        
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}
   


int main()
{
    int iValue =0;

    printf("Enter number of tinmes you want to display number on screen:");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}                                   