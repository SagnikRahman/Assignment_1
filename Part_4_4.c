#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student* dynamicStudent = (struct Student*)malloc(sizeof(struct Student));

    if (dynamicStudent == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter the name of the student: ");
    scanf("%49s", dynamicStudent->name);
    
    printf("Enter the age of the student: ");
    scanf("%d", &dynamicStudent->age);

    printf("Student Details:\n");
    printf("Name: %s\n", dynamicStudent->name);
    printf("Age: %d\n", dynamicStudent->age);

    free(dynamicStudent);

    return 0;
}
