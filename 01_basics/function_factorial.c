#include <stdio.h>
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Factorial not defined for negative numbers\n");
    else
        printf("Factorial = %d\n", factorial(n));
    return 0;
}
