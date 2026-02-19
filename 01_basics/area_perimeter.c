#include <stdio.h>
int main() {
    double length, width;
    printf("Enter length and width: ");
    if (scanf("%lf %lf", &length, &width) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    if (length <= 0 || width <= 0) {
        printf("Length and width must be positive values\n");
        return 0;
    }
    if (length > 1e6 || width > 1e6) {
        printf("Values too large\n");
        return 0;
    }
    double area = length * width;
    double perimeter = 2 * (length + width);
    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);
    return 0;
}
