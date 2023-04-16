
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
        c_textcolor(YELLOW);
        printf ("\nChoose from the following:\n");
        c_textcolor(LIGHTGREEN);
        printf ("1. ");
        c_textcolor(LIGHTGRAY);
        printf ("Student's Data      (Student's Name is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("2. ");
        c_textcolor(LIGHTGRAY);
        printf ("Student's Data      (Student's ID is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("3. ");
        c_textcolor(LIGHTGRAY);
        printf ("edit Student's Data (Student's Name is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("4. ");
        c_textcolor(LIGHTGRAY);
        printf ("edit Student's Data (Student's ID is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("5. ");
        c_textcolor(LIGHTGRAY);
        printf ("call Student        (Student's Name is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("6. ");
        c_textcolor(LIGHTGRAY);
        printf ("call Student        (Student's ID is required)\n");
        c_textcolor(LIGHTGREEN);
        printf ("7. ");
        c_textcolor(LIGHTGRAY);
        printf ("add Student\n");
        c_textcolor(LIGHTGREEN);
        printf ("8. ");
        c_textcolor(LIGHTGRAY);
        printf ("insert Student\n");
        c_textcolor(LIGHTGREEN);
        printf ("9. ");
        c_textcolor(LIGHTGRAY);
        printf ("delete Student\n");
        c_textcolor(LIGHTGREEN);
        printf ("10.");
        c_textcolor(LIGHTGRAY);
        printf ("the whole Student DataBase\n");
        c_textcolor(LIGHTGREEN);
        printf ("11.");
        c_textcolor(LIGHTGRAY);
        printf ("sort Students Alphabetically\n");
        c_textcolor(LIGHTGREEN);
        printf ("12.");
        c_textcolor(LIGHTGRAY);
        printf ("sort Students according grades\n");
        c_textcolor(LIGHTGREEN);
        printf ("13.");
        c_textcolor(LIGHTGRAY);
        printf ("get the greatest grade\n");
        c_textcolor(LIGHTGREEN);
        printf ("14.");
        c_textcolor(LIGHTGRAY);
        printf ("Exist !!\n\n");

        c_textcolor(YELLOW);
        printf ("choice number: ");
        c_textcolor(WHITE);
        c_textcolor(LIGHTMAGENTA);
        scanf ("%d", &choice);
        c_textcolor(WHITE);
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
                c_textcolor(LIGHTGRAY);
                printf ("the greatest Grade is ");
                c_textcolor(LIGHTGREEN);
                printf("%d\n", maxGrade.maxGrade);
                //printf ("student of the year: \n");
                //printf ("student's ID: %d\n", maxGrade.maxGradeID);
                //??
                //student_Print1 (school[maxGrade.maxGradeID]);
                //school_printStudent2 (maxGrade.maxGradeID);
            }
            else
            {
                c_textcolor(LIGHTRED);
                printf ("There is no Student of the year !!\n");
            }
            break;

            case 14:
            c_textcolor(WHITE);
            school_storeData ();
            return 0;
            break;

            default: 
            printf ("\nplease, Enter number from 1 to 14.");
        }
    }
}