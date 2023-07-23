#include <stdio.h>
#include <stdlib.h>
int main() {
    int** dynamicArray;
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    dynamicArray = (int**)malloc(rows * sizeof(int*));
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = (int*)malloc(cols * sizeof(int));
        if (dynamicArray[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Enter %d values for the %d x %d 2D array:\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &dynamicArray[i][j]);
        }
    }

    printf("Values stored in the dynamically allocated 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", dynamicArray[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        free(dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}
