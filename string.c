
#include "string.h"

void string_print (char* string)
{
    for (u32 index = 0; string[index]; index++)
    {
        printf ("%c", string[index]);
    }
    printf ("\n");
}

void string_print2 (char* string)
{
    for (u32 index = 0; string[index]; index++)
    {
        printf ("%c", string[index]);
    }
}

void string_scan (char* string, u32 maxStringSize)
{
    if (maxStringSize >= 1)
    {
        u32 index = 0;
        scanf ("%c", string + index);
        index++;
        for (       ; string[index-1] != '\n' && index < maxStringSize - 1; index++)
        {
            scanf ("%c", string + index);
        } 
        string[index-1] = 0;
    }
}

STRING_COMPARE string_compare1 ( char* string1, char* string2)
{
    for (u32 index = 0; string1[index] || string2[index]; index++)
    {
        if (string1[index] != string2[index] && string1[index] - 'a' != string2[index] - 'A' && string1[index] - 'A' != string2[index] - 'a')
        {
            return STRING_NOT_EQUAL;
        }
    }

    return STRING_EQUAL;
}

STRING_COMPARE string_compare2 ( char* string1, char* string2)
{
    for (u32 index = 0; string1[index] || string2[index]; index++)
    {
        if (string1[index] > string2[index])
        {
            return STRING_BIGGER;
        }
        else if (string1[index] < string2[index])
        {
            return STRING_SMALLER;
        }
    }

    return STRING_EQUAL;
}