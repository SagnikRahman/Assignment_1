#include <stdio.h>
#include <stdlib.h>
int** matrixAddition(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        result[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}
int** matrixMultiplication(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
    int** result = (int**)malloc(rows1 * sizeof(int*));
    for (int i = 0; i < rows1; i++) {
        result[i] = (int*)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}
int** matrixTranspose(int** matrix, int rows, int cols) {
    int** result = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
        for (int j = 0; j < rows; j++) {
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows1 = 2, cols1 = 2;
    int** matrix1 = (int**)malloc(rows1 * sizeof(int*));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int*)malloc(cols1 * sizeof(int));
    }
    matrix1[0][0] = 1; matrix1[0][1] = 2;
    matrix1[1][0] = 3; matrix1[1][1] = 4;
    int rows2 = 2, cols2 = 2;
    int** matrix2 = (int**)malloc(rows2 * sizeof(int*));
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = (int*)malloc(cols2 * sizeof(int));
    }
    matrix2[0][0] = 5; matrix2[0][1] = 6;
    matrix2[1][0] = 7; matrix2[1][1] = 8;
    printf("Matrix 1:\n");
    printMatrix(matrix1, rows1, cols1);
    printf("Matrix 2:\n");
    printMatrix(matrix2, rows2, cols2);
    int** resultAddition = matrixAddition(matrix1, matrix2, rows1, cols1);
    printf("Matrix Addition:\n");
    printMatrix(resultAddition, rows1, cols1);
    int** resultMultiplication = matrixMultiplication(matrix1, matrix2, rows1, cols1, cols2);
    printf("Matrix Multiplication:\n");
    printMatrix(resultMultiplication, rows1, cols2);
    int** resultTranspose = matrixTranspose(matrix1, rows1, cols1);
    printf("Matrix Transpose:\n");
    printMatrix(resultTranspose, cols1, rows1);
    for (int i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);
    for (int i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);
    for (int i = 0; i < rows1; i++) {
        free(resultAddition[i]);
    }
    free(resultAddition);
    for (int i = 0; i < rows1; i++) {
        free(resultMultiplication[i]);
    }
    free(resultMultiplication);

    for (int i = 0; i < cols1; i++) {
        free(resultTranspose[i]);
    }
    free(resultTranspose);
    return 0;
}
