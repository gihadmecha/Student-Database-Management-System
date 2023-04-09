
#include <stdio.h>
#include "stdTypes.h"
#include "school.h"     

int main ()
{
    u8 choice;
    maxGrade maxGrade;

    school_initialize ();
    
    while (1)
    {
        printf ("\nChoose from the following:\n");
        printf ("1. Student's Data      (Student's Name is required)\n");
        printf ("2. Student's Data      (Student's ID is required)\n");
        printf ("3. edit Student's Data (Student's Name is required)\n");
        printf ("4. edit Student's Data (Student's ID is required)\n");
        printf ("5. call Student        (Student's Name is required)\n");
        printf ("6. call Student        (Student's ID is required)\n");
        printf ("7. add Student\n");
        printf ("8. insert Student\n");
        printf ("9. delete Student\n");
        printf ("10.the whole Student DataBase\n");
        printf ("11.sort Students Alphabetically\n");
        printf ("12.sort Students according grades\n");
        printf ("13.get the greatest grade\n");
        printf ("14.Exist !!\n\n");

        printf ("choice number: ");
        scanf ("%d", &choice);
        printf ("\n");
        switch(choice)
        {
            case 1:
            school_printSearchedStudent ();
            break;
            
            case 2:
            if (school_printStudent () == 0)
            {
                printf ("Not Exist !!\n");
            }
            break;

            case 3:
            if (school_editStudentByName () == 0)
            {
                printf ("Student is Not Exist !!\n");
            }
            break;

            case 4:
            if (school_editStudentByID () == 0)
            {
                printf ("Student is Not Exist !!\n");
            }
            break;

            case 5:
            if (school_callStudentByName () == 0)
            {
                printf ("Student is Not Exist !!\n");
            }
            break;

            case 6:
            if (school_callStudentByID () == 0)
            {
                printf ("Student is Not Exist !!\n");
            }
            break;

            case 7:
            if(school_addStudent () == 0)
            {
                printf ("Error !!\n");
                printf ("There is No Place !!\n");
            }
            break;

            case 8:
            if(school_insertStudent () == 0)
            {
                printf ("Error !!\n");
                printf ("There is No Place !!\n");
            }
            break;

            case 9:
            school_deleteStudent ();
            break;

            case 10:
            school_print ();
            break;

            case 11:
            school_sortAlphabetically_selectionSort ();
            break;

            case 12:
            school_sortAccordingGrades_selectionSort ();
            break;

            case 13:
            maxGrade = school_getMaxGrade();
            if(maxGrade.maxGradeAck)
            {
                printf ("the greatest Grade is %d\n", maxGrade.maxGrade);
                printf ("student of the year: \n");
                printf ("student's ID: %d\n", maxGrade.maxGradeID);
                //??
                student_Print1 (school[maxGrade.maxGradeID]);
                school_printStudent2 (maxGrade.maxGradeID);
            }
            else
            {
                printf ("There is no Student of the year !!\n");
            }
            break;

            case 14:
            school_storeData ();
            return 0;
            break;

            default: 
            printf ("\nplease, Enter number from 1 to 14.");
        }
    }
}