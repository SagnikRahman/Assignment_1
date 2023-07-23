#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int **pptr = &ptr1;
    printf("Value of a: %d\n", **pptr);
    printf("Value of b: %d\n", *ptr2);

    **pptr = 30;

    printf("Updated value of b: %d\n", *ptr2);
    printf("Value of a: %d\n", *ptr1);

    return 0;
}
