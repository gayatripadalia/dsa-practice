#include <stdio.h>
int main() {
    int n, key, count = 0;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    printf("Enter element to count: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    printf("Occurrences of %d = %d\n", key, count);
    return 0;
}
