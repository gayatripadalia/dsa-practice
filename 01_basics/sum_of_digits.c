#include <stdio.h>
int main() {
    long long num;
    int digit, sum = 0;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num < 0)
        num = -num;
    if (num == 0)
        sum = 0;
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
