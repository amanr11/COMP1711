#include <stdio.h>

typedef struct {
    char name[20];
    char stu_id[11];
    unsigned mark;
} stu;

int main(){
    int n_students = 10,i;
    stu students[]={
        {"aman","101",99},
        {"a","102",99},
        {"b","103",34},
        {"c","104",96},
        {"d","105",48},
        {"e","106",65},
        {"f","107",89},
        {"g","108",93},
        {"h","109",12},
        {"j","110",46},

    };
    for(i=0; i<n_students; i++){
        printf("-------------------------\n");
        printf("Name: %s\n", students[i].name);
        printf("\nStudent ID: %s\n", students[i].stu_id);
        printf("\nMark Recieved: %u\n", students[i].mark);
    }
}