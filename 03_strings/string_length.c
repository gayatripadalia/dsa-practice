#include <stdio.h>
#include <string.h>  // for strlen()
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    /*
    ------------------------------------------------------
    Concept 1: Manual Length Calculation
    ------------------------------------------------------
    - Traverse the string character by character
    - Stop when null character '\0' is found
    - Count number of characters
    */
    while (str[length] != '\0') {
        length++;
    }
    // Remove newline added by fgets
    if (str[length - 1] == '\n') {
        length--;
    }
    printf("Length (manual) = %d\n", length);
    /*
    ------------------------------------------------------
    Concept 2: Using strlen() Function
    ------------------------------------------------------
    - strlen() is a library function from <string.h>
    - It counts characters until '\0'
    - It also counts newline '\n' if present
    */
    int len2 = strlen(str);
    // Adjust if newline exists
    if (str[len2 - 1] == '\n') {
        len2--;
    }
    printf("Length (using strlen) = %d\n", len2);
    return 0;
}
