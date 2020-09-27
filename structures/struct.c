#include <stdio.h>

struct Student{
    int roll;
    char name[20];
    double gp;
};

typedef int integer;
typedef struct Student Student;

int main(){
    integer x; // integer is an alias

    struct Student s1, s2, s3;
    // struct Student s1, s2, s3;
    s1.roll = 5;
    s2.roll = 10;
    s3.gp = 9.6;

    return 0;
}