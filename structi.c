#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name[20];
    char stu_id [11];
    unsigned mark;
};

int main(){
    char mark[4];
    struct student new_student;
    strcpy(new_student.name,"aman");
    strcpy(new_student.stu_id,"10101010");
    printf("Enter Mark Recieved: ");
    scanf("%s",mark);
    new_student.mark=atoi(mark);
    printf("Student Name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.stu_id);
    printf("Mark Recieved: %u\n", new_student.mark);
    return 0;
}