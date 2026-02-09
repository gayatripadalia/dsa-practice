#include <stdio.h>
int main() {
    long long num,reversed = 0,digit;
    int isNegative = 0;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (isNegative)
        reversed = -reversed;
    printf("Reversed number = %lld\n",reversed);
    return 0;
}
