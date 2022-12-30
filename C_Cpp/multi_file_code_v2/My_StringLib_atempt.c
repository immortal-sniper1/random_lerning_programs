#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "My_StringLib_atempt.h"

int myGetLenght( char x[] )
{
    int length=0;
    while( x[length] != '\0' )
    {
        length++;
    }
    return length;
}
