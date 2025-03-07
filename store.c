#include <stdio.h>

int main() {
    int sales[3][4]; // 3 products, 4 weeks
    int *ptr = &sales[0][0];

    // Input sales data
    for (int product = 0; product < 3; product++) {
        printf("Enter sales data for Product %d:\n", product + 1);
        for (int week = 0; week < 4; week++) {
            printf("Week %d: ", week + 1);
            scanf("%d", (ptr + product * 4 + week));
        }
    }

    // Calculate total sales for each product
    int total[3] = {0};
    for (int product = 0; product < 3; product++) {
        for (int week = 0; week < 4; week++) {
            total[product] += *(ptr + product * 4 + week);
        }
    }

    // Display total sales and find the best-selling product
    int maxSales = total[0], maxProduct = 0;
    for (int product = 0; product < 3; product++) {
        printf("Total sales for Product %d: %d\n", product + 1, total[product]);
        if (total[product] > maxSales) {
            maxSales = total[product];
            maxProduct = product;
        }
    }

    printf("Product %d has the highest sales: %d\n", maxProduct + 1, maxSales);

    return 0;
}
