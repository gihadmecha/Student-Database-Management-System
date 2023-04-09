
#include "student.h"

void student_Print1 (student student)
{
    printf ("Name: ");
    string_print (student.name);
    printf ("mobile: ");
    string_print (student.mobile);
    printf ("age: ");
    printf ("%d\n", student.age);
    printf ("grade: ");
    printf ("%d\n", student.grade);
    printf ("father's Name: ");
    string_print (student.father.name);
    printf ("father's mobile: ");
    string_print (student.father.mobile);
    printf ("father's ID: ");
    printf ("%d\n", student.father.ID);
    printf ("mother's Name: ");
    string_print (student.mother.name);
    printf ("mother's mobile: ");
    string_print (student.mother.mobile);
    printf ("mother's ID: ");
    printf ("%d\n", student.mother.ID);
}

void student_print1Array (student* studentArray, u32 studentArraySize)
{
    for (u32 index = 0; index < studentArraySize; index++)
    {
        printf ("student ID: %d\n", index);
        student_Print1 (studentArray[index]);
        printf ("\n");
    }
}

void student_Print2 (student* student)
{
    printf ("Name: ");
    string_print (student->name);
    printf ("mobile: ");
    string_print (student->mobile);
    printf ("age: ");
    printf ("%d\n", student->age);
    printf ("grade: ");
    printf ("%d\n", student->grade);
    printf ("father's Name: ");
    string_print (student->father.name);
    printf ("father's mobile: ");
    string_print (student->father.mobile);
    printf ("father's ID: ");
    printf ("%d\n", student->father.ID);
    printf ("mother's Name: ");
    string_print (student->mother.name);
    printf ("mother's mobile: ");
    string_print (student->mother.mobile);
    printf ("mother's ID: ");
    printf ("%d\n", student->mother.ID);
}

void student_print2Array (student* studentArray, u32 studentArraySize)
{
    for (u32 index = 0; index < studentArraySize; index++)
    {
        printf ("student ID: %d\n", index);
        student_Print2 (studentArray + index);
        printf ("\n");
    }
}

void student_scan ( student* student)
{
    char garbage;
    //scanf ("%c", &garbage);
    printf ("Name: ");
    string_scan (student->name, 10);
    printf ("mobile: ");
    string_scan (student->mobile, 13);
    printf ("age: ");
    scanf ("%d", &student->age);
    printf ("grade: ");
    scanf ("%d", &student->grade);
    printf ("father's Name: ");
    scanf ("%c", &garbage);
    string_scan (student->father.name, 10);
    printf ("father's mobile: ");
    string_scan (student->father.mobile, 13);
    printf ("father's ID: ");
    scanf ("%d", &student->father.ID);
    printf ("mother's Name: "); 
    scanf ("%c", &garbage);
    string_scan (student->mother.name, 10);
    printf ("mother's mobile: ");
    string_scan (student->mother.mobile, 13);
    printf ("mother's ID: ");
    scanf ("%d", &student->mother.ID); 
}

void student_swap (student* pstudent1, student* pstudent2)
{
    student temp = *pstudent1;
    *pstudent1 = *pstudent2;
    *pstudent2 = temp;
}

