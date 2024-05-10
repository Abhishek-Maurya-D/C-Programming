#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing in text mode
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 2;
    }

    // Read characters from the input file and write to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File content copied successfully!\n");

    return 0;
}
