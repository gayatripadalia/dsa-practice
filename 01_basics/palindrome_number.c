#include <stdio.h>
int main() {
    long long num, original, reversed = 0, digit;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (num < 0) {
        printf("Negative numbers are not palindrome\n");
        return 0;
    }
    original = num;
    while(num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if(original == reversed)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    return 0;
}
