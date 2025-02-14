#include <stdio.h>
#include <stdlib.h> // Required for malloc()

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n); // User decides array size

    // Allocating memory for 'n' integers
    int *arr = (int*) malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory not allocated
    }

    // Taking input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Storing values
    }

    // Printing array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Accessing elements
    }

    // Freeing allocated memory
    free(arr);
    return 0;
}
