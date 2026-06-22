#include <stdio.h>

int main() {
    int i = 0;

    printf("%d\n", i); // include 0

    while (i < 10) {
        i++;
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}