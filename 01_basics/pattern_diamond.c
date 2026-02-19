#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (n <= 0) {
        printf("Number of rows must be positive\n");
        return 0;
    }
    if (n > 50) {
        printf("Limit exceeded (max 50 rows allowed)\n");
        return 0;
    }
    // Upper Pyramid
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    // Lower Inverted Pyramid
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
