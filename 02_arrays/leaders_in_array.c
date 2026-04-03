#include <stdio.h>
int main() {
    int arr[100], n, i, j, leader;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Leaders in the array:\n");
    for(i = 0; i < n; i++) {
        leader = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                leader = 0;
                break;
            }
        }
        if(leader)
            printf("%d ", arr[i]);
    }
    return 0;
}
