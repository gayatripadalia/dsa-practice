#include <stdio.h>
int main() {
    int num, i;
    int sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;
}
