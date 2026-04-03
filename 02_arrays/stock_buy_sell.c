// Concept: Max profit problem (very common interview question)
// Problem: Find maximum profit from buying and selling stock once.
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int min_price, max_profit = 0;
    printf("Enter number of days: ");
    scanf("%d", &n);
    printf("Enter stock prices:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min_price = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min_price) {
            min_price = arr[i];
        } else if(arr[i] - min_price > max_profit) {
            max_profit = arr[i] - min_price;
        }
    }
    printf("Maximum Profit = %d", max_profit);
    return 0;
}
