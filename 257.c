#include <stdio.h>
int main() {
    FILE *file = fopen("example.txt", "wt");  // Creating a file in text mode
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    // Code to write to the file using text mode
    fclose(file);
    // Later in the program, when reading from the file
    file = fopen("example.txt", "rt");  // Reading from the file in text mode
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    // Code to read from the file using text mode
    fclose(file);
    return 0;
}
