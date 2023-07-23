#include <stdio.h>
void modifyArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}
int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    printf("Array values before function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    modifyArray(myArray, size);
    printf("Array values after function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}
