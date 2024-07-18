#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount =0 ,i =0;
    int *Brr =NULL;

    //Step1: Accept number of elemtens from user
    printf("Enter the elements that you want : \n");
    scanf("%d",&iCount);

    //Step2: Allocate dyanmic mememory for that number of elements
    Brr =(int *)malloc(iCount * sizeof(int));

    //step3: Accept values from user and store into that memory
    printf("Enter the elements : \n");
    for(i =0; i <iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are: \n");
    for(i =0; i<iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    //step4: pass the address in logic
    //missing

    //step5 : when complete of use of memory the free it
    free(Brr);
    return 0;
}