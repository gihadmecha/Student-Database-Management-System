
#include "school.h"


int school_addStudent ()
{
    if (schoolIndex < SCHOOL_SIZE)
    {
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
    string_scan (name);

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