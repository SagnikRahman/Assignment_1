#include <stdio.h>
int main() 
{
    int num = 20;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr: %d\n", *ptr);
    *ptr = 30;
    printf("Updated value of num: %d\n", num);
    printf("Value pointed to by ptr after modification: %d\n", *ptr);
    return 0;
}
