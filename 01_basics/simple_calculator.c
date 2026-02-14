#include <stdio.h>
int main() {
    double a, b;
    char op;
    printf("Enter expression (example: 5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Invalid input format\n");
        return 1;
    }
    switch(op) {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;
        case '-':
            printf("Result = %.2lf\n", a - b);
            break;
        case '*':
            printf("Result = %.2lf\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero not allowed\n");
                return 0;
            }
            printf("Result = %.2lf\n", a / b);
            break;
        case '%':
            if ((int)b == 0) {
                printf("Error: Modulo by zero not allowed\n");
                return 0;
            }
            printf("Result = %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
