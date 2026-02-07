#include <stdio.h>
int main() {
    int n, i;
    long long a = 0,b = 1,next;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (n <= 0) {
        printf("Number of terms must be positive\n");
        return 0;
    }
    if (n > 90) {
        printf("Warning: values may overflow after 90 terms\n");
    }
    printf("Fibonacci Series:\n");
    for(i = 1;i <= n;i++) {
        if (i == 1) {
            printf("%lld ",a);
        }
        else if (i == 2) {
            printf("%lld ",b);
        }
        else {
            next = a + b;
            printf("%lld ",next);
            a = b;
            b = next;
        }
    }
    return 0;
}
