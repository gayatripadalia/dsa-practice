#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (fabs(num) < 1e-9) {
        printf("Zero\n");
    }
    else if (num > 0) {
        printf("Positive number\n");
    }
    else {
        printf("Negative number\n");
    }
    return 0;
}
