
#include "school.h"


int school_addStudent ()
{
    if (schoolIndex < SCHOOL_SIZE)
    {
        char garbage;
        scanf ("%c", &garbage);
        student_scan ( school + schoolIndex);
        schoolIndex++;

        return 1;
    }
    
    return 0;
}

int school_shiftDown (u32 ID)
{
    if (schoolIndex < SCHOOL_SIZE && ID < SCHOOL_SIZE)
    {
        if (ID > schoolIndex)
            schoolIndex = ID;

        for (u32 index = schoolIndex - 1; index >= ID; index--)
        {
            school[index + 1] = school[index];
        }

        schoolIndex++;

        return 1;
    }

    return 0;
}

int school_insertStudent ()
{
    if ( schoolIndex < SCHOOL_SIZE)
    {
        u32 ID;
        printf ("Student' ID: ");
        scanf ("%d", &ID);
        if (ID < SCHOOL_SIZE)
        {
            school_shiftDown (ID);
            char garbage;
            scanf ("%c", &garbage);
            student_scan (school + ID);
            return 1;
        }
    }
    
    return 0;
}

void school_print ()
{
    //student_print1Array (school, SchoolIndex + 1);
    student_print2Array (school, schoolIndex);
}

int school_printStudent ()
{
    u32 ID;
    printf ("Student's ID: ");
    scanf ("%d", &ID);
    if (ID < schoolIndex)
    {
        student_Print1 (school[ID]);
        //student_Print2 (school + ID);

        return 1;
    }

    return 0;
}

void school_deleteStudent ()
{
    u32 ID;
    printf ("Student's ID: ");
    scanf ("%d", &ID);
    if (ID < schoolIndex)
    {
        for (u32 index = ID; index < schoolIndex - 1; index++)
        {
            school[index] = school[index + 1];
        }
        schoolIndex--;
    }
}

maxGrade school_getMaxGrade ()
{
    maxGrade maxGrade = {0, 0, 0}; 
    if (schoolIndex > 0)
    {
        maxGrade.maxGradeAck = 1;

        maxGrade.maxGrade = school[0].grade;

        for (u32 index = 0; index < schoolIndex; index++)
        {
            if (maxGrade.maxGrade < school[index].grade)
            {
                maxGrade.maxGrade = school[index].grade;
                maxGrade.maxGradeID = index;
            }
        }
    }
    
    return maxGrade;
}

int school_printStudent2 (u32 ID)
{
    if (ID < schoolIndex)
    {
        student_Print1 (school[ID]);
        //student_Print2 (school + ID);

        return 1;
    }

    return 0;
}

index school_searchStudentByName ()
{
    char name[10];
    printf ("student's Name: ");
    char garbage;
    scanf ("%c", &garbage);
    string_scan (name, 10);

    index requiredStudentIndex = {0, 0};

    for (u32 index = 0; index < schoolIndex; index++)
    {
        if (string_compare1 (school[index].name, name) == STRING_EQUAL)
        {
            requiredStudentIndex.ack = 1;
            requiredStudentIndex.index = index; 
            return requiredStudentIndex;
        }
    }

    return requiredStudentIndex;
}

void school_printSearchedStudent ()
{
    index index = school_searchStudentByName ();

    if (index.ack)
    {
        student_Print1(school[index.index]);
    }
    else 
    {
        printf ("Not Exist !!\n\n");
    }
}

void school_sortAlphabetically_selectionSort ()
{
    student studentWithBiggestName;
    u32 studentWithBiggestNameID;
    for (u32 loopNumber = 0; loopNumber < schoolIndex; loopNumber++)
    {
        studentWithBiggestName = school[0];
        studentWithBiggestNameID = 0;
        for (u32 index = 0; index < schoolIndex - loopNumber; index++)
        {
            if ( string_compare2 (studentWithBiggestName.name, school[index].name) == STRING_SMALLER)
            {
                studentWithBiggestName = school[index];
                studentWithBiggestNameID = index;
            }
        }

        student_swap (school + studentWithBiggestNameID, school + schoolIndex - 1 - loopNumber);
    }
}

void school_sortAccordingGrades_selectionSort ()
{
    student studentWithGreatestGrade;
    u32 studentWithGreatestGradeID;
    for (u32 loopNumber = 0; loopNumber < schoolIndex; loopNumber++)
    {
        studentWithGreatestGrade = school[0];
        studentWithGreatestGradeID = 0;
        for (u32 index = 0; index < schoolIndex - loopNumber; index++)
        {
            if (studentWithGreatestGrade.grade < school[index].grade)
            {
                studentWithGreatestGrade.grade = school[index].grade;
                studentWithGreatestGradeID = index;
            }
        }
        student_swap (school + studentWithGreatestGradeID, school + schoolIndex - 1 - loopNumber);
    }
}

void school_sortAccordingGrades_bubbleSort ()
{
    int sortFlag;
    u32 loopNumber = 0;

    do
    {
        sortFlag = 0;
        for (u32 index = 0; index < schoolIndex - 1 - loopNumber; index++)
        {
            if (school[index].grade > school[index + 1].grade)
            {
                student_swap ( school + index, school + (index + 1) );
                sortFlag = 1;
            }
        }

        loopNumber++;

    }while (sortFlag == 1);
}

int school_editStudentByName ()
{
    index index = school_searchStudentByName ();
    if (index.ack)
    {
        student_scan (school + index.index);
    }
    
    return index.ack;
}

int school_editStudentByID ()
{
    u32 ID;
    printf ("Student' ID: ");
    scanf ("%d", &ID);
    if (ID < SCHOOL_SIZE)
    {
        if (ID > schoolIndex)
            schoolIndex = ID + 1;

        char garbage;
        scanf ("%c", &garbage);
        student_scan (school + ID);

        return 1;
    }

    return 0;
}

COORD GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = { 0, 0 };
        return invalid;
    }
}

int school_callStudentByID ()
{
    int x;
    int y;
    u32 ID;
    printf ("Student's ID: ");
    scanf ("%d", &ID);

    if (ID < schoolIndex)
    {
        string_print2 (school[ID].mobile);

        x = c_wherex();
        y = c_wherey();
        for (u32 index = 0; index < 5; index++)
        {
            printf (" ");
            _sleep (500);
            printf (".");
            _sleep (500);
            printf (".");
            _sleep (500);
            printf (".");
            _sleep (500);
            c_gotoxy(x, y);
            printf ("    ");
            _sleep (500);
            c_gotoxy(x, y);
        }
        
        printf("\n");
        return 1;
    }

    return 0;
}

int school_callStudentByName ()
{
    int x;
    int y;
    index requiredIndex = school_searchStudentByName ();

    if (requiredIndex.ack)
    {
        string_print2 (school[requiredIndex.index].mobile);

        x = c_wherex();
        y = c_wherey();
        for (u32 index = 0; index < 5; index++)
        {
            printf (" ");
            _sleep (500);
            printf (".");
            _sleep (500);
            printf (".");
            _sleep (500);
            printf (".");
            _sleep (500);
            c_gotoxy(x, y);
            printf ("    ");
            _sleep (500);
            c_gotoxy(x, y);
        }
        printf ("\n");

        return 1;
    } 

    return 0;
}


