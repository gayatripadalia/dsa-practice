#include <stdio.h>
int main() {
    int n, i;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
