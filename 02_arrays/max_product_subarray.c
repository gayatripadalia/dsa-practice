// Concept: Variation of Kadane (VERY important interview problem)
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int max_prod, min_prod, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max_prod = min_prod = result = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < 0) {
            int temp = max_prod;
            max_prod = min_prod;
            min_prod = temp;
        }
        if(arr[i] > max_prod * arr[i])
            max_prod = arr[i];
        else
            max_prod = max_prod * arr[i];
        if(arr[i] < min_prod * arr[i])
            min_prod = arr[i];
        else
            min_prod = min_prod * arr[i];
        if(max_prod > result)
            result = max_prod;
    }
    printf("Maximum Product Subarray = %d", result);
    return 0;
}
