// Chapter - 18
// [C] - (c) - 1.
    // Option 1


#include <stdio.h>
int main() {
    char character = 'A';
    int integer = 42;
    float floatingPoint = 3.14;
    printf("Character: %c\n", character);   // Character
    printf("Integer: %d\n", integer);        // Format specification for integer
    printf("Float: %f\n", floatingPoint);    // Format specification for float
    printf("Escape Sequence: Hello\n");      // Escape sequence
    return 0;
}

// [C] - (c) - 2.
    // Option 2


#include <stdio.h>
int main() {
    char character = 'B';
    int integer = 73;
    float floatingPoint = 2.718;
    printf("Character: %c\n", character);   // Character
    printf("Integer: %d\n", integer);        // Format specification for integer
    printf("Float: %f\n", floatingPoint);    // Format specification for float
    return 0;
}

// [C] - (c) - 3.
    // Option 3


#include <stdio.h>
int main() {
    char string[] = "World";
    int number = 99;
    printf("String: %s\n", string);         // Format specification for string
    printf("Integer: %d\n", number);        // Format specification for integer
    printf("Escape Sequence: \tTab\n");     // Escape sequence
    return 0;
}

// [C] - (c) - 4.
    // Option 4


#include <stdio.h>
int main() {
    char quote = '"';
    char percent = '%';
    char backslash = '\\';
    printf("Inverted Commas: %c\n", quote);    // Character
    printf("Percentage Sign: %c\n", percent);  // Character
    printf("Backslash: %c\n", backslash);      // Character
    return 0;
}
