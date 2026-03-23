// Concept: Sliding Window
#include <stdio.h>
int main() {
    int arr[100], n, k, i, j, max_sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);
    for(i = 0; i <= n-k; i++) {
        int sum = 0;
        for(j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if(sum > max_sum)
            max_sum = sum;
    }
    printf("Maximum sum of subarray of size %d = %d", k, max_sum);
    return 0;
}
