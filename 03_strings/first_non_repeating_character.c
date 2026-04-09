// Concept: Find first character that appears only once in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 256
int main() {
    char str[100];
    int count[MAX] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline
    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        count[tolower(str[i])]++;
    }
    // Find first non-repeating
    char first = '\0';
    for(int i = 0; str[i] != '\0'; i++) {
        if(count[tolower(str[i])] == 1) {
            first = str[i];
            break;
        }
    }
    if(first)
        printf("First non-repeating character: %c\n", first);
    else
        printf("No non-repeating character found\n");
    return 0;
}
