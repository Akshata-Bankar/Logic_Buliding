//0 to 4 free
// 4 to 10 900$
//10~11 to 50 2000$
//50~51 to more 500$ Water park prices...
//Mala vaty adhi if check karych mg else use karych mg ntr cout print karych

/////////////////////////////////////////////
//
// Function Name:CalculateTicket
// Description : Used to Display ticket price based on age
// Input : Integer 
//Output: Intger
//Author: Akshata Bankar
//date :29/4/2024

#include<stdio.h>

int CalculateTicket(int iAge)
{
    if ((iAge >=0)&& (iAge<=4))
    {
        return 0;
    }
    else if ((iAge >4)&&(iAge<=10))
    {
        return 900;
    }
    else if ((iAge >11)&&(iAge<=50))
    {
        return 2000;
    }
    else if (iAge >50)
    {
        return 500;
    }
}
int main()
{
   int iValue =0,  iRet=0;
   

   printf("Enter the age: \n");
   scanf("%d",&iValue);

   iRet=CalculateTicket(iValue);
   printf("Your ticket price is: %d \n",iRet);

   return 0;


}

