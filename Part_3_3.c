#include <stdio.h>

unsigned long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: The number must be a positive integer.\n");
    } else {
        unsigned long long int result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }
    return 0;
}
