// Concept: Reverse string using two-pointer approach
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find length
    while (str[i] != '\0') {
        i++;
    }
    // Adjust for newline
    if (str[i - 1] == '\n') {
        str[i - 1] = '\0';
        i--;
    }
    j = i - 1;
    // Reverse string
    while (j > i / 2 - 1) {
        char temp = str[i - j - 1];
        str[i - j - 1] = str[j];
        str[j] = temp;
        j--;
    }
    printf("Reversed string = %s\n", str);
    return 0;
}
