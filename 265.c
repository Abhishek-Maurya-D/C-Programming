// redirecting the input
#include <stdio.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("input.txt", "r");  // Open the input file for reading
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }
    outputFile = fopen("output.txt", "w");  // Open the output file for writing
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 2;
    }
    // Read characters from the input file and write to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }
    fclose(inputFile);  // Close the files
    fclose(outputFile);  // Close the files
    // printf("File content copied successfully!\n");
    return 0;
}
