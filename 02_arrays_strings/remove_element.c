Goal: Remove all occurrences of a given element
#include <stdio.h>
int main() {
    int n, key;
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
    printf("Enter element to remove: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    if (j == n) {
        printf("Element not found\n");
    } else {
        printf("Array after removal:\n");
        for (int i = 0; i < j; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
