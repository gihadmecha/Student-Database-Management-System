
#include "string.h"

void string_print (char* string)
{
    for (u32 index = 0; string[index]; index++)
    {
        printf ("%c", string[index]);
    }
    printf ("\n");
}

void string_scan (char* string)
{
    scanf ("%c", string);
    u32 index = -1;
    do 
    {
        index++;
        scanf ("%c", string + index);
    } while (string[index] != '\n');
    string[index] = 0;
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