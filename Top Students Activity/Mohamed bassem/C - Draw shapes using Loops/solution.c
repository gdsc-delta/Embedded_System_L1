#include <stdio.h>

int main() {
    int d = 7;

    for (int n = 1; n <= d; ++n) {
        for (int w = 1; w <= n; ++w) {
            printf("L ");
        }
        printf("\n");
    }

    return 0;
}
