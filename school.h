
#include "student.h"
#include <time.h>
#include <conio.h>


#define SCHOOL_SIZE 10

static u32 schoolIndex = 0;
static student school[SCHOOL_SIZE] = {0};

typedef struct{
    int maxGradeAck;
    u32 maxGradeID;
    s32 maxGrade;
} maxGrade;

typedef struct {
    int ack;
    u32 index;
} index;

int school_addStudent ();
int school_shiftDown ();
int school_insertStudent ();
void school_print ();
int school_printStudent ();
void school_deleteStudent ();
maxGrade school_getMaxGrade ();
int school_printStudent2 (u32 ID);
index school_searchStudentByName ();
void school_printSearchedStudent ();
void school_sortAlphabetically_selectionSort ();
void school_sortAccordingGrades_selectionSort ();
void school_sortAccordingGrades_bubbleSort ();
int school_editStudentByName ();
int school_editStudentByID ();
int school_callStudentByID ();
int school_callStudentByName ();
void school_storeData ();
void school_initialize ();