#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 3;

    // Step 1: Allocate memory for row pointers
    int **arr = (int**) malloc(rows * sizeof(int*));

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
    }

    // Step 3: Assign values
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++; // Storing values
        }
    }

    // Step 4: Print values
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Step 5: Free memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]); // Free each row
    }
    free(arr); // Free row pointers

    return 0;
}
