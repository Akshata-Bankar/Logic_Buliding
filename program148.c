#include<stdio.h>

void Swap(int *p,int *q)
{
    int temp=0;

    temp=*p;
    *p=*q;
    *q=temp;

}
int mian()
{
    int A=0, B=0;

    printf("Enter first number : \n");
    scanf("%d",&A);

    printf("Enter first number : \n");
    scanf("%d",&B);

    Swap(&A,&B);  //swap(100,200)

    printf("Value of A after Swapping: %d\n",A);        //21
    printf("Value of A after Swapping: %d\n",A);        //11
    return 0;


}