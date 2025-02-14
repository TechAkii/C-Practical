#include <stdio.h>
#include <stdlib.h> // For qsort()

// Comparison function for ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numbers[] = {45, 12, 78, 34, 23};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compare); // Sorting

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
