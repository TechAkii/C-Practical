#include <stdio.h> // Standard library for input/output functions

int main() {
    int n; // Number of operations
    float op1, op2, value; // Operands and result
    float tot1 = 0, tot2 = 0, tot3 = 0, tot4 = 0, grand_tot = 0; // Totals
    char opera; // Operator

    // Ask user how many operations to perform
    printf("How many operations do you want to perform? ");
    scanf("%d", &n);

    // Loop for the number of operations
    for (int i = 1; i <= n; i++) {
        printf("\nInput the operator (+, -, *, /): ");
        scanf(" %c", &opera); // Read operator (note the space before %c to consume leftover newline)

        printf("Input the two operands: ");
        scanf("%f %f", &op1, &op2);

        if (opera == '+') {
            value = op1 + op2;
            printf("Sum of your numbers is: %.2f\n", value);
            tot1 += value;
        } else if (opera == '-') {
            value = op1 - op2;
            printf("Subtraction of your numbers is: %.2f\n", value);
            tot2 += value;
        } else if (opera == '*') {
            value = op1 * op2;
            printf("Multiplication of your numbers is: %.2f\n", value);
            tot3 += value;
        } else if (opera == '/') {
            if (op2 != 0) {
                value = op1 / op2;
                printf("Division of your numbers is: %.2f\n", value);
                tot4 += value;
            } else {
                printf("Division by zero is not allowed. Skipping this operation.\n");
            }
        } else {
            printf("Invalid operator. Please try again.\n");
        }
    }

    // Calculate the grand total
    grand_tot = tot1 + tot2 + tot3 + tot4;
    printf("\nThe grand total of all operations is: %.2f\n", grand_tot);

    return 0; // End of the program
}