#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (year <= 0) {
        printf("Year must be positive\n");
        return 0;
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }
    return 0;
}
