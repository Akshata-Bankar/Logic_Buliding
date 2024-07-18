#include<stdio.h>

int main()
{
    int iNo=438;
    int iDigit=0;

    iDigit=iNo%10;
    printf("%d\n",iDigit);  //8

    iNo=iNo/10;             //43
    iDigit=iNo%10;          //3
    printf("%d\n",iDigit);  //3

    iNo=iNo/10;         //4
    iDigit=iNo%10;         //4
    printf("%d\n",iDigit);  //4

    iNo=iNo /10;    //0


    return 0;
}
