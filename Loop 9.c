/*
Develop a program to generate a checkerboard pattern with alternating numbers.
•	Input: Size of the checkerboard.
•	Output: Alternating numbers (1 and 0) in a grid.
Example:
For size = 4:
1 0 1 0  
0 1 0 1  
1 0 1 0  
0 1 0 1  
*/

#include <stdio.h>

int main() {
    int size, i, j;
    
       printf("Size of the checkerboard: ");
       scanf("%d", &size);
    
        for (i = 0; i < size; i++) {       
        for (j = 0; j < size; j++) {    
            if ((i + j) % 2 == 0) {    
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
