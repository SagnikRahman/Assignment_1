#include <stdio.h>
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int myArray[] = {10, 35, 25, 40, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int maxValue = findMax(myArray, size);
    printf("The maximum value in the array is: %d\n", maxValue);
    return 0;
}
