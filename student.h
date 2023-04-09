
#include "stdTypes.h"
#include "person.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char name[10];
    char mobile[13];
    u8  age;
    s32 grade;
    person father;
    person mother;
} student;

void student_Print1 (student student);
void student_print1Array (student* studentArray, u32 studentArraySize);
void student_Print2 (student* student);
void student_print2Array (student* studentArray, u32 studentArraySize);
void student_scan ( student* student);
void student_swap (student* pstudent1, student* pstudent2);