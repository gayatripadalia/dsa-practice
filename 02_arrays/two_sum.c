#include <stdio.h>
int main() {
    int arr[100], n, target, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }
    if(!found)
        printf("No pair found.");
    return 0;
}
