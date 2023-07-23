#include <stdio.h>
int main() 
{
    int arr[] = {4, 2, 8, 6, 1};
    int *arrPtr = arr; 
    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d]: %d\n", i, *(arrPtr + i));
    }
    return 0;
}
