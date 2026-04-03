// Print sum of all possible subarrays of an array.
#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum of all subarrays:\n");
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            printf("%d ", sum);
        }
    }
    return 0;
}
// Time Complexity: O(n²)
