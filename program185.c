//Basic form
#include<stdio.h>
#include<stdbool.h>

void UpdateString(char *str)
{
    while(*str !='\0')
    {
        
        str++;
    }
}
int main()
{
    char Arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
    
    UpdateString(Arr);

    printf("Updated string is %s\n");
    
    return 0;
}