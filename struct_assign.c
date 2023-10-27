#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Name Surname"); //makes both equal
    strcpy(new_student.student_id, "13902178"); //copies um into student id
    new_student.mark = 78;
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}