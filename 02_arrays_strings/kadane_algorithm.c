#include <stdio.h>
int main() {
    int arr[100], n, i;
    int max_current, max_global;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max_current = max_global = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max_current + arr[i])
            max_current = arr[i];
        else
            max_current = max_current + arr[i];
        if(max_current > max_global)
            max_global = max_current;
    }
    printf("Maximum Subarray Sum = %d", max_global);
    return 0;
}
