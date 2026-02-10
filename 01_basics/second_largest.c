#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("Second largest not possible\n");
        return 0;
    }
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = INT_MIN;
    int second = INT_MIN;
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if(second == INT_MIN) {
        printf("No second largest element (all same?)\n");
    } else {
        printf("Second largest = %d\n", second);
    }
    return 0;
}
