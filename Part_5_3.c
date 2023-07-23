#include <stdio.h>
#include <stdlib.h>
void doubleValue(int* numPtr) {
    *numPtr *= 2;
}
int main() {
    int* dynamicInt = (int*)malloc(sizeof(int));

    if (dynamicInt == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    *dynamicInt = 10;
    printf("Value before function call: %d\n", *dynamicInt);
    doubleValue(dynamicInt);
    printf("Value after function call: %d\n", *dynamicInt);
    free(dynamicInt);
    return 0;
}
