#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;  // index for unique elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;  // new size
}
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size\n");
        return 0;
    }
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int newSize = removeDuplicates(arr, n);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    return 0;
}
