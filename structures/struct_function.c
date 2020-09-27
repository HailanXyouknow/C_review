#include <stdio.h>

typedef struct{
    int roll;
    char name[20];
    double phy, chem, math;
} Student;

void inputStudent(Student *sp);
char getGrade(Student);
void printStudent(Student);
double getAverageMarks(Student);

void inputStudent(Student *sp){
    printf("Enter roll: ");
    scanf("%d", &sp->roll);
    printf("Enter name: ");
    scanf(" %[^\n]", sp->name); //name is the base address to the array
    printf("Marks in Physics: ");
    scanf(" %lf", &sp->phy);
    printf("Marks in Chem: ");
    scanf(" %lf", &sp->chem);
    printf("Marks in Math: ");
    scanf(" %lf", &sp->math);
}

double getAverageMarks(Student s){
    double sum = 0.0;
    sum = s.phy + s.chem + s.math;
    return sum/3.0;
}

char getGrade(Student s){
    char grade;

    double avg = getAverageMarks(s);
    if (avg>=90)
        grade = 'A';
    else if (avg>=80)
        grade = 'B';
    else if (avg>=70)
        grade = 'C';
    else if (avg>=60)
        grade = 'D';
    else
        grade = 'F';
    return grade;
}

void printStudent(Student s){
    printf("--------- Student Details ---------\n");
    printf("-----------------------------------\n");
    printf("Roll:         %-4d\n", s.roll);
    printf("Name:         %-20s\n", s.name);
    printf("Physics:      %-10.2lf\n", s.phy);
    printf("Chem:         %-10.2lf\n", s.chem);
    printf("Math:         %-10.2lf\n", s.math);
    printf("Grade:        %-4c\n", getGrade(s));
    printf("-----------------------------------\n");
}

// void printStudent(Student sp){ // not going to change value so object by value is sufficient
//     printf("Roll: %4d, Name: %-20s %10.2lf\n", sp.roll, sp.name, sp.gp);
// }

int main() {
    Student s;
    inputStudent(&s);
    printStudent(s);

    return 0;
}