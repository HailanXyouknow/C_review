#include <stdio.h>

typedef int integer;
//typedef struct Student Student;

// To combine typedef and struct!!!:
typedef struct Student {
    int roll;
    char name[20];
    double gp;
} Student;

int main(){
    integer x; // integer is an alias

    // Without typedef: struct Student s1, s2, s3;
    // With typedef:
    Student s1, s2, d3;
    s1.roll = 5;
    s2.roll = 10;
    s1.gp = 9.6;

    return 0;
}