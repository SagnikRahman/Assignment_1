#include <stdio.h>
int addNumbers(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = addNumbers(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}
