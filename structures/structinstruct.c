#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int eno;
    char name[20];
    double basic;
    Date dob; // e.dob.day=15;
} Employee;

int main(){
    Employee e;

    return 0;
}