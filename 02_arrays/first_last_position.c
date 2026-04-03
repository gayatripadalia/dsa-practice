#include <stdio.h>
int main() {
    int arr[100], n, key;
    int first = -1, last = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            if(first == -1) {
                first = i;
            }
            last = i;
        }
    }
    if(first == -1)
        printf("Element not found\n");
    else {
        printf("First Position: %d\n", first);
        printf("Last Position: %d\n", last);
    }
    return 0;
}
// Time complexity: O(n)
