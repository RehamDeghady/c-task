#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chooseoption ;
    float pound ;
    float dollar ;
    printf("currency converter");
    printf ("choose option please");
    printf ("1.convert from Egyptian pound to dollar");
    printf("2.convert from Dollar to Egyptian pound");
    scanf (%d , chooseoption);

    if chooseoption == 1
    {

        printf ("enter the amount you want to convert to dollar");
        scanf (%f ,pound );
        dollar = pound*16 ;
        printf ("the amount in dollar is", dollar);

    }
    if chooseoption == 2
    {

        printf ("enter the amount you want to convert to Egyptian pound");
        scanf (%f ,dollar );
        pound = dollar\16 ;
        printf ("the amount in egyptian pound is" ,pound);

    }
}
