#include <stdio.h>
#include <stdlib.h>
int main() {
    int* dynamicArray;
    int size;
    printf("Enter the size of the integer array: ");
    scanf("%d", &size);
    dynamicArray = (int*)malloc(size * sizeof(int));

    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d values for the integer array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    printf("Values stored in dynamically allocated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    free(dynamicArray);
    return 0;
}
