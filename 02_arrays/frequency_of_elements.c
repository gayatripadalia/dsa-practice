#include <stdio.h>
int main() {
    int arr[100], freq[100];
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) {
        int count = 1;
        if(freq[i] == 0)
            continue;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        freq[i] = count;
    }
    printf("\nFrequency of elements:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }
    return 0;
}
