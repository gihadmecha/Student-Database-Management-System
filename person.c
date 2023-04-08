
#include "person.h"

void person_print1 (person person)
{
    printf ("Name: ");
    string_print (person.name);
    printf ("mobile: ");
    string_print (person.mobile);
    printf ("ID: ");
    printf ("%d\n", person.ID);
}