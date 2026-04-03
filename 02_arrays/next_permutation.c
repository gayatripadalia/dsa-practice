//Concept: Next lexicographical permutation (in-place)
#include <stdio.h>
// Function to reverse array from index l to r
void reverse(int arr[], int l, int r) {
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i = n - 2;
    // Step 1: Find first decreasing element
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        // Step 2: Find just greater element
        while (arr[j] <= arr[i]) {
            j--;
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Step 3: Reverse remaining part
    reverse(arr, i + 1, n - 1);
    printf("Next permutation:\n");
    for(int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}
