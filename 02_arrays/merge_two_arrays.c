#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter size of second array: ");
    if (scanf("%d", &n2) != 1 || n2 < 0) {
        printf("Invalid size\n");
        return 1;
    }
    int arr1[n1], arr2[n2], merged[n1 + n2];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    // Merge logic
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
