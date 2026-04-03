// Concept: Triplets with sum = 0 (very famous problem)
#include <stdio.h>
int main() {
    int arr[100], n, i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Triplets with sum 0:\n");
    for(i = 0; i < n-2; i++) {
        for(j = i+1; j < n-1; j++) {
            for(k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return 0;
}
