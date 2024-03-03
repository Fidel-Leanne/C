#include <stdio.h>

int main() {
    int age = 30;
    int *pAge = &age;

    double gpa = 4.90;
    double *pGpa = &gpa;

    char grade = 'b';
    char *pGrade = &grade;

    printf("%d", *pAge);

    return 0;
}
