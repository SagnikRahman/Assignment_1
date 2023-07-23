#include <stdio.h>

int* findMax(int arr[], int size) {
    int* maxPtr = &arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }

    return maxPtr;
}

int main() {
    int numbers[] = {10, 5, 20, 15, 30};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int* maxPtr = findMax(numbers, size);

    printf("Maximum value in the array: %d\n", *maxPtr);

    return 0;
}
