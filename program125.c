#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[] ,int iSize)
{
    int i=0,iEven=0;
    for(i =0;i<iSize;i++)
    {
        if((Arr[i])%2==0)
        {
            printf("Even elements are: \n");
        }
    }
} 
int main()
{
    int iCount =0 ,i =0;
    int *Brr =NULL;
  

    printf("Enter the elements that you want : \n");
    scanf("%d",&iCount);

    Brr =(int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i =0; i <iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    DisplayEven(Brr,iCount);

    free(Brr);
    return 0;
}