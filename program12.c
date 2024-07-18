//check wheter marking system in school students are pass or fail
#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks <=0.0f) || (fMarks <=100.0f))
    {   
        printf("Invalide Input\n");
        return false;
    }
    if((fMarks >=0.0f) && (fMarks <=35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }  
}
int main()
{
    float fValue =0.0f;
    bool bRet =false;

    printf("please enter your percentage:");
    scanf("%f",&fValue);

    bRet =DisplayResult(fValue);
    if(bRet == true)
    {
        printf(" is in the range it will be pass\n");
    }
    else{
        printf(" is not  in in this range it will be fail\n");
    }
    return 0;

}
