#include <stdio.h>
int main() {
    int arr[100], n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n/2) {
            printf("Majority element: %d", arr[i]);
            return 0;
        }
    }
    printf("No majority element found");
    return 0;
}
