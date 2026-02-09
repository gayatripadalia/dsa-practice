#include <stdio.h>
int main() {
    long long num;
    int count = 0;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num == 0) {
        printf("Digits = 1\n");
        return 0;
    }
    if (num < 0)
        num = -num;
    while (num != 0) {
        count++;
        num /= 10;
    }
    printf("Digits = %d\n",count);
    return 0;
}
