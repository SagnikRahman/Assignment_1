#include <stdio.h>
void reverseString(char* str) {
    if (*str == '\0') {
        return;
    }
    reverseString(str + 1); 
    putchar(*str); 
}
int main() {
    const char* inputStr = "Hello, World!";
    printf("Original String: %s\nReversed String: ", inputStr);
    reverseString(inputStr);
    putchar('\n');
    return 0;
}
