#include <stdio.h>
int main() {
    int num, original, digit, sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num < 0) {
        printf("Negative numbers are not Armstrong\n");
        return 0;
    }
    original = num;
    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
