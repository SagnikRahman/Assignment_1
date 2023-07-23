#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Usage: %s num1 num2 operator\n", argv[0]);
        return 1; 
    }
    double num1 = atof(argv[1]);
    double num2 = atof(argv[2]);
    char operator = argv[3][0];
    double result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    return 0;
}
