#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include for strcpy()

struct Student {
    char name[50];
    int age;
    double gpa;
    char major[60];
}; // Don't forget the semicolon here

int main() {
    struct Student student1;

    student1.age = 80;
    student1.gpa = 2.0;
    strcpy(student1.name, "Jimmy");
    strcpy(student1.major, "CS");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Major: %s\n", student1.major);

    return 0;
}
