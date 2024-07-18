#include<stdio.h>
#include<stdbool.h>
//User is going to enter only positive inputs

//Algorithm
/*
    START
        Accept one number as No
        Divide that number No by 2
        If remainder is 0
        then dispaly the result as Even number
        otherwisae display the result as ODD number 
    STOP
*/

/////////////////////////////////////////////
//
//Function Name :   CheckEvenOdd
//Description:      Used to cechk whether number is even or odd // check asel tr booleanch use karych
//Input:            Integer
//Output:           Boolean
//Author:           Akshata Subhash Bankar
//Date :            16/04/2024
//
/////////////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2)==0)
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
    unsigned int iValue=0;
    bool bRet =false;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    if(bRet == true)
    {
        printf("%d is Even number \n",iValue);
    }
    else
    {
        printf("%d is Odd number \n",iValue);

    }

    return 0;
}