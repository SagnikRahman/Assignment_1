#include <stdio.h>
#include <stdlib.h>
int main() {
    int* dynamicInt;
    int userInput;
    printf("Enter an integer value: ");
    scanf("%d", &userInput);

    dynamicInt = (int*)malloc(sizeof(int));

    if (dynamicInt == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    *dynamicInt = userInput;
    printf("Value stored in dynamically allocated memory: %d\n", *dynamicInt);
    free(dynamicInt);
    return 0;
}
