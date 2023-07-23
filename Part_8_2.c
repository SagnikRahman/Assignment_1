#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int numStudents = 3;
    struct Student* studentList = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (studentList == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code.
    }

    // Accessing and modifying values using pointer arithmetic
    strcpy((studentList + 0)->name, "John");
    (studentList + 0)->age = 20;

    strcpy((studentList + 1)->name, "Alice");
    (studentList + 1)->age = 22;

    strcpy((studentList + 2)->name, "Bob");
    (studentList + 2)->age = 21;

    // Print the details of each student
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: Name: %s, Age: %d\n", i + 1, (studentList + i)->name, (studentList + i)->age);
    }

    free(studentList);
    return 0;
}
