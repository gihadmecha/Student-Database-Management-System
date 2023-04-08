
#include "stdTypes.h"
#include <stdio.h>
#include "string.h"

typedef struct {
    char name[10];
    char mobile[12];
    u32 ID;
} person;

void person_print1 (person person);