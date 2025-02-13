#include <stdio.h>

int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d   ", (i == 0 || i == 6 || j == 0 || j == 6) ? 4 : 3);
        }
        printf("\n");
    }
    return 0;
}
