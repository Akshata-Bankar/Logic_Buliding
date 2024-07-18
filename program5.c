/*

Step 1:  Understand the problem statement
Step 2:  Write the algorithm
Step 3:  Decide the programming language
Step 4:  Write the program
Step 5:  Test the program


//Problem statement:Accept 2number and perform addition

Step1:Understand the problem statement

*/

#include<stdio.h>

////////////////////////////////////////////////////////////
///
//Function Name: Addition
//Description :Is is used to perform addition of 2 floats
//Input:  Float,Float
//Output:   Float
//Author:   Akshata Subhash Bankar
//Date: 15/04/2024
//
///////////////////////////////////////////////////////

float Addition(float fNo1,float fNo2)
{
    float fAns=0.0;
    fAns=fNo1+fNo2;
    return fAns;
}
 //////////////////////////////////// 
 // Function name: main
 //Desciption: Its a entry point function
//////////////////////////////////////////////
/// @return /
int main()
{
    float fValue1=0.0, fValue2=0.0;
    float fResult=0.0;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second number:\n");
    scanf("%f",&fValue2);

    fResult=Addition(fValue1 ,fValue2 );

    printf("Addition of two numbers is:%f\n",fResult);
   
    return 0;

}