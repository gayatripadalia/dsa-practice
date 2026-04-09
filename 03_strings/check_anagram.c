// Concept: Two strings are anagrams if they have the same characters with same frequency.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 256
int main() {
    char str1[100], str2[100];
    int count1[MAX] = {0}, count2[MAX] = {0};
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    // Count frequency of each character (case-insensitive)
    for(int i = 0; str1[i] != '\0'; i++) {
        count1[tolower(str1[i])]++;
    }
    for(int i = 0; str2[i] != '\0'; i++) {
        count2[tolower(str2[i])]++;
    }
    // Compare frequencies
    int isAnagram = 1;
    for(int i = 0; i < MAX; i++) {
        if(count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }
    if(isAnagram)
        printf("Strings are Anagrams\n");
    else
        printf("Strings are NOT Anagrams\n");
    return 0;
}
