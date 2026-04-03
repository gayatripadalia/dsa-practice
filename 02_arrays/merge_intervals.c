// Concept: Sorting + merging overlapping intervals
#include <stdio.h>
// Simple bubble sort based on start time
void sort(int arr[][2], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j][0] > arr[j + 1][0]) {
                int temp1 = arr[j][0];
                int temp2 = arr[j][1];
                arr[j][0] = arr[j + 1][0];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][0] = temp1;
                arr[j + 1][1] = temp2;
            }
        }
    }
}
int main() {
    int intervals[100][2], n;
    printf("Enter number of intervals: ");
    scanf("%d", &n);
    printf("Enter intervals (start end):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
    }
    // Step 1: Sort intervals
    sort(intervals, n);
    int start = intervals[0][0];
    int end = intervals[0][1];
    printf("Merged intervals:\n");
    for(int i = 1; i < n; i++) {
        if(intervals[i][0] <= end) {
            // Overlapping
            if(intervals[i][1] > end)
                end = intervals[i][1];
        } else {
            // Print previous
            printf("[%d, %d]\n", start, end);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    // Print last interval
    printf("[%d, %d]\n", start, end);
    return 0;
}
