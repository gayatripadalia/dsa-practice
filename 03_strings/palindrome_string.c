// Concept: Check if string reads same forward & backward (Two-pointer)
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i = 0, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    j = len - 1;
    int isPalindrome = 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
        printf("String is a Palindrome\n");
    else
        printf("String is NOT a Palindrome\n");
    return 0;
}
