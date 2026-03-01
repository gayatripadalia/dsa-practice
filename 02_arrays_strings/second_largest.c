#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Need at least 2 elements\n");
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
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if (second == INT_MIN)
        printf("No second largest (all elements same?)\n");
    else
        printf("Second largest = %d\n", second);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
