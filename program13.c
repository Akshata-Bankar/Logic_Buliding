//check wheter marking system in school students are pass or fail
#include<stdio.h>


int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks >100.0f))
    {   
        return 1;
    }
    if((fMarks >=0.0f) && (fMarks <35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }  
}
int main()
{
    float fValue =0.0f;
    int iRet =0;

    printf("please enter your percentage:");
    scanf("%f",&fValue);

    iRet =DisplayResult(fValue);
    if(iRet == 1)
    {
        printf("Your input is ivalid\n");
        
    }
    else if(iRet==2)
    {
        printf("Student is Fail\n");
        
    }
    else if(iRet==3)
    {
        printf("Student is pass\n");

    }
    return 0;

}
