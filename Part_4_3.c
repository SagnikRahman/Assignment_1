#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char* dynamicString;
    char inputString[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", inputString);
    dynamicString = (char*)malloc((strlen(inputString) + 1) * sizeof(char));

    if (dynamicString == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    strcpy(dynamicString, inputString);
    printf("String stored in dynamically allocated memory: %s\n", dynamicString);
    free(dynamicString);
    return 0;
}
