//check wheter marking system in school students are pass or fail
/*
    0 to 35     fail                            (35 is exclusive)
    35 to 50    pass class                       (50 is exclusive)
    50 to 60    Second class                        (60 is exclusive)
    60 to 75    First class                            (75 is exclusive)
    75 to 100   First class with distiction             (100 is inclusive)

*/
#include<stdio.h>

//User defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3
#define RET_SECOND_CLASS 4
#define RET_FIRST_CLASS 5
#define RET_DISTINCTION 6


int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks >100.0f))
    {   
        return RET_INVALID;
    }
    if((fMarks >=0.0f) && (fMarks <35.0f))
    {
        return RET_FAIL;
    }
    if((fMarks >=35.0f) && (fMarks <50.0f))
    {
        return RET_PASS;
    }
    if((fMarks >=50.0f) && (fMarks <60.0f))
    {
        return RET_SECOND_CLASS;
    }
    if((fMarks >=60.0f) && (fMarks <75.0f))
    {
        return RET_FIRST_CLASS;
    }
    if((fMarks >=75.0f) && (fMarks <=100.0f))
    {
        return RET_DISTINCTION;
    }
    else
    {
        return RET_PASS;
    }  
}
int main()
{
    float fValue =0.0f;
    int iRet =0;

    printf("please enter your percentage:");
    scanf("%f",&fValue);

    iRet =DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Your input is ivalid\n");
        
    }
    else if(iRet==RET_FAIL)
    {
        printf("Student is Fail\n");
        
    }
    else if(iRet==RET_PASS)
    {
        printf("Student is PASS\n");
        
    }
    else if(iRet==RET_SECOND_CLASS)
    {
        printf("Student is Second class\n");
        
    }
    else if(iRet==RET_FIRST_CLASS)
    {
        printf("Student is first class\n");
        
    }
    else if(iRet==RET_DISTINCTION)
    {
        printf("Student is Distiction\n");

    }
    return 0;

}
