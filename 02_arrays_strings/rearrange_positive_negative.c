#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size\n");
        return 0;
    }
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int temp[100];
    int k = 0;
    // First negatives
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[k++] = arr[i];
        }
    }
    // Then positives and zeros
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[k++] = arr[i];
        }
    }
    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}
