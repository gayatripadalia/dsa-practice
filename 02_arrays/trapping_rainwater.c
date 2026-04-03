// Concept: Classic problem (very important in interviews)
// Problem: Calculate how much water can be trapped between bars
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int left_max[100], right_max[100];
    int water = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter heights:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    left_max[0] = arr[0];
    for(i = 1; i < n; i++) {
        left_max[i] = (arr[i] > left_max[i-1]) ? arr[i] : left_max[i-1];
    }
    right_max[n-1] = arr[n-1];
    for(i = n-2; i >= 0; i--) {
        right_max[i] = (arr[i] > right_max[i+1]) ? arr[i] : right_max[i+1];
    }
    for(i = 0; i < n; i++) {
        int min = (left_max[i] < right_max[i]) ? left_max[i] : right_max[i];
        water += min - arr[i];
    }
    printf("Trapped water = %d", water);
    return 0;
}
