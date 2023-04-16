
#include "student.h"

void student_Print1 (student student)
{
    c_textcolor(LIGHTGRAY);
    printf ("Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.name);
    c_textcolor(LIGHTGRAY);
    printf ("mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.mobile);
    c_textcolor(LIGHTGRAY);
    printf ("age: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student.age);
    c_textcolor(LIGHTGRAY);
    printf ("grade: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student.grade);
    c_textcolor(LIGHTGRAY);
    printf ("father's Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.father.name);
    c_textcolor(LIGHTGRAY);
    printf ("father's mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.father.mobile);
    c_textcolor(LIGHTGRAY);
    printf ("father's ID: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student.father.ID);
    c_textcolor(LIGHTGRAY);
    printf ("mother's Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.mother.name);
    c_textcolor(LIGHTGRAY);
    printf ("mother's mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student.mother.mobile);
    c_textcolor(LIGHTGRAY);
    printf ("mother's ID: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student.mother.ID);
}

void student_print1Array (student* studentArray, u32 studentArraySize)
{
    for (u32 index = 0; index < studentArraySize; index++)
    {
        c_textcolor(LIGHTGRAY);
        printf ("student ID: ");
        c_textcolor(LIGHTGREEN);
        printf ("%d\n", index);
        student_Print1 (studentArray[index]);
        printf ("\n");
    }
}

void student_Print2 (student* student)
{
    c_textcolor(LIGHTGRAY);
    printf ("Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->name);
    c_textcolor(LIGHTGRAY);
    printf ("mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->mobile);
    c_textcolor(LIGHTGRAY);
    printf ("age: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student->age);
    c_textcolor(LIGHTGRAY);
    printf ("grade: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student->grade);
    c_textcolor(LIGHTGRAY);
    printf ("father's Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->father.name);
    c_textcolor(LIGHTGRAY);
    printf ("father's mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->father.mobile);
    c_textcolor(LIGHTGRAY);
    printf ("father's ID: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student->father.ID);
    c_textcolor(LIGHTGRAY);
    printf ("mother's Name: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->mother.name);
    c_textcolor(LIGHTGRAY);
    printf ("mother's mobile: ");
    c_textcolor(LIGHTGREEN);
    string_print (student->mother.mobile);
    c_textcolor(LIGHTGRAY);
    printf ("mother's ID: ");
    c_textcolor(LIGHTGREEN);
    printf ("%d\n", student->mother.ID);
}

void student_print2Array (student* studentArray, u32 studentArraySize)
{
    for (u32 index = 0; index < studentArraySize; index++)
    {
        c_textcolor(LIGHTGRAY);
        printf ("student ID: ");
        c_textcolor(LIGHTGREEN);
        printf ("%d\n", index);
        student_Print2 (studentArray + index);
        printf ("\n");
    }
}


void student_scan ( student* student)
{
    char garbage;
    //scanf ("%c", &garbage);
    c_textcolor(YELLOW);
    printf ("Name: ");
    c_textcolor(LIGHTMAGENTA);
    string_scan (student->name, 10);
    c_textcolor(YELLOW);
    printf ("mobile: ");
    c_textcolor(LIGHTMAGENTA);
    string_scan (student->mobile, 13);
    c_textcolor(YELLOW);
    printf ("age: ");
    c_textcolor(LIGHTMAGENTA);
    scanf ("%d", &student->age);
    c_textcolor(YELLOW);
    printf ("grade: ");
    c_textcolor(LIGHTMAGENTA);
    scanf ("%d", &student->grade);
    c_textcolor(YELLOW);
    printf ("father's Name: ");
    c_textcolor(LIGHTMAGENTA);
    scanf ("%c", &garbage);
    string_scan (student->father.name, 10);
    c_textcolor(YELLOW);
    printf ("father's mobile: ");
    c_textcolor(LIGHTMAGENTA);
    string_scan (student->father.mobile, 13);
    c_textcolor(YELLOW);
    printf ("father's ID: ");
    c_textcolor(LIGHTMAGENTA);
    scanf ("%d", &student->father.ID);
    c_textcolor(YELLOW);
    printf ("mother's Name: ");
    c_textcolor(LIGHTMAGENTA); 
    scanf ("%c", &garbage);
    string_scan (student->mother.name, 10);
    c_textcolor(YELLOW);
    printf ("mother's mobile: ");
    c_textcolor(LIGHTMAGENTA);
    string_scan (student->mother.mobile, 13);
    c_textcolor(YELLOW);
    printf ("mother's ID: ");
    c_textcolor(LIGHTMAGENTA);
    scanf ("%d", &student->mother.ID); 
}

void student_swap (student* pstudent1, student* pstudent2)
{
    student temp = *pstudent1;
    *pstudent1 = *pstudent2;
    *pstudent2 = temp;
}

