#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Entred the string is:%s\n",Arr);
    return 0;
}