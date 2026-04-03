#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0;i < n;i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1;i < n;i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    return 0;
}
