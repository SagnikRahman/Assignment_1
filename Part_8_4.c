#include <stdio.h>
int countVowels(const char* str) {
    int count = 0;

    while (*str) {
        char c = *str;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    const char* inputStr = "Hello, World!";
    int vowelCount = countVowels(inputStr);
    printf("Number of vowels in the string: %d\n", vowelCount);
    return 0;
}
