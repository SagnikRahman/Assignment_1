#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};
void changePersonAge(struct Person p) {
    p.age = 30;
}
int main() {
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 25;
    printf("Age before function call: %d\n", person1.age);
    changePersonAge(person1);
    printf("Age after function call: %d\n", person1.age);
    return 0;
}
