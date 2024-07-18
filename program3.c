//Probleam statement : Accept 2 number from user and perform its addition

#include<stdio.h>

int main()
{
    //int i,j,k;
    int iValue1=0, iValue2=0;
    int iResult=0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

   iResult=iValue1+iValue2;

    printf("Addition of two numbers is:%d\n",iResult);
   
    return 0;

}