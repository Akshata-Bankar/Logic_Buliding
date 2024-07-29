#include<stdio.h>
int main()
{
    unsigned int iNo =0;
    unsigned int iMask =0x000000008;
    unsigned int iResult=0;

    printf("Enter number : \n");
    scanf("%u",&iNo);

   iResult=iNo & iMask;

    printf("Updated number is:%u\n",iResult);
   

    return 0;
}


/*
toggle :chaluch ch band band ch chalu

    position:4
    Input : 12      0   0   0   0   1   1   0   0
    Output:4        0   0   0   0   0   1   0   0

    Input:21        0   0   0   1   0   1   0   1
    Output:29       0   0   0   1   1   1   0   1   

                    0   0   0   0  1   1   0    0   

                    0   0   0   0  1   0   0   0
                 ------------------------------------- ^
                    0   0   0   0   0   1   0   0
    --------------------------------------------------------------

                     0   0   0   0    0   1   0    0   

                     0   0    0   0   1   0   0    0
                 ------------------------------------- ^
                     0   0    0    0   1   1   0   0



    
    1111    1111    1111    1111    1101    1111    1111
    f       f          f    f          d    f       f
    */
   //Hexadecimal.....
   //   0100    0110    1111      0000      1101        1100       1110      0011
   //   4       6       (15)F       0     (13) D     (12)  C       (14)E       3


