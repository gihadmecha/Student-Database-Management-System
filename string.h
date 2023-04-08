
#include "stdTypes.h"
#include <stdio.h>
#include "UTILS.h"

typedef enum {
    STRING_SMALLER,
    STRING_EQUAL,
    STRING_NOT_EQUAL,
    STRING_BIGGER
} STRING_COMPARE;

void string_print (char* string);
void string_scan (char* string);
STRING_COMPARE string_compare1 ( char* string1, char* string2);
STRING_COMPARE string_compare2 ( char* string1, char* string2);