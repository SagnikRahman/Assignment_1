#include <stdio.h>
#include <stdlib.h>
void resizeArray(int** arr, int* size) {
    int newSize = *size * 2;
    int* newArr = (int*)realloc(*arr, newSize * sizeof(int));
    if (newArr == NULL) {
        printf("Memory reallocation failed.\n");
        return; 
    }

    *arr = newArr;
    *size = newSize;

    printf("Array resized to double its size.\n");
}
int main() {
    int size = 5;
    int* arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    resizeArray(&arr, &size);

    printf("Resized Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
