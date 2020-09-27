#include <stdio.h>

typedef struct {
    int roll;
    char name[20];
    double gp;
} Student;

int main(){
    Student s;
    Student *sp;

    sp = &s;
    //sp->roll = 15;
    printf("Student Name: ");
    scanf("%[^\n]", sp->name);
    printf("%s\n", sp->name);

    return 0;
}