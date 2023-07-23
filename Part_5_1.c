#include <stdio.h>
void changeValue(int num) {
    num = 100;
}
int main() {
    int num = 50;
    printf("Value before function call: %d\n", num);

    changeValue(num);

    printf("Value after function call: %d\n", num);
    return 0;
}
