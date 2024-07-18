//print 5 times Jay hanuman......
#include<stdio.h>

void Display(int iNo)
{
   int iCnt =0;


   //       1       2       3
   for(iCnt =0; iCnt <=iNo; iCnt++)
   {
    printf("Jay Hanuman...\n");  //4
   }
   
}

int main()
{
    int iValue=0;
    printf("Enter number of times to display Jay Hanuman on Screen:");
    scanf("%d",&iValue);
    Display(iValue);
    
    return 0;
}                                   