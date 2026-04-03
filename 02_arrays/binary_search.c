#include <stdio.h>
int main() {
    int n, key;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    int arr[n];
    printf("Enter elements (sorted):\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2; 
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("Element not found\n");
    return 0;
}// Time Complexity: O(log n)
// Space Complexity: O(1)
