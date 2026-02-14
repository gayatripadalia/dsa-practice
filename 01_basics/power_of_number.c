#include <stdio.h>
int main() {
    int base, exp, i;
    long long result = 1;
    printf("Enter base and exponent: ");
    if (scanf("%d %d", &base, &exp) != 2 || exp < 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    printf("Result = %lld\n", result);
    return 0;
}
