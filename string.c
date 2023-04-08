
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