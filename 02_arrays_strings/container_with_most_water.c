// Concept: Two-pointer technique (VERY IMPORTANT)
#include <stdio.h>
int main() {
    int arr[100], n, left = 0, right, max_area = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter heights:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    right = n - 1;
    while(left < right) {
        int height = (arr[left] < arr[right]) ? arr[left] : arr[right];
        int width = right - left;
        int area = height * width;
        if(area > max_area)
            max_area = area;
        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }
    printf("Maximum water container = %d", max_area);
    return 0;
}
