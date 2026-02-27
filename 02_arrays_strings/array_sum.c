#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    int arr[n];
    int sum = 0;
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
