
#include "student.h"

#define SCHOOL_SIZE 3

static u32 schoolIndex = 0;
static student school[SCHOOL_SIZE] = {0};

typedef struct{
    int maxGradeAck;
    u32 maxGradeID;
    s32 maxGrade;
} maxGrade;

typedef struct {
    char ack;
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