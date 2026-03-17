/* Concept: Find the length of the longest consecutive sequence in an array.
Example
Input: 100 4 200 1 3 2
Output: 4 (sequence: 1,2,3,4)
*/
#include <stdio.h>
int main() {
    int arr[100], n, i, j, count, max_len = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        count = 1;
        int current = arr[i];
        while(1) {
            int found = 0;
            for(j = 0; j < n; j++) {
                if(arr[j] == current + 1) {
                    current++;
                    count++;
                    found = 1;
                    break;
                }
            }
            if(!found)
                break;
        }
        if(count > max_len)
            max_len = count;
    }
    printf("Longest consecutive sequence length: %d", max_len);
    return 0;
}
