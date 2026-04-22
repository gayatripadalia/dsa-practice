// Concept: Remove duplicate characters using frequency tracking.
#include <stdio.h>
#define MAX 256
int main() {
    char str[100];
    int visited[MAX] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("String after removing duplicates: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != '\n' && visited[(int)ch] == 0) {
            printf("%c", ch);
            visited[(int)ch] = 1;
        }
    }
    return 0;
}
