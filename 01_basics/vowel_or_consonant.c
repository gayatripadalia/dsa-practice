#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a single alphabet: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    if (!isalpha(ch)) {
        printf("Input is not an alphabet character\n");
        return 0;
    }
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}
