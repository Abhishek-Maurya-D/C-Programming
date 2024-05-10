// LINK WITH 7.txt

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define EndOfWord word[i] == ' ' || word[i] == '\n' || word[i] == EOF
int main(int argc, char const *argv[]) {
    // Check if the correct number of command line arguments is provided
    if (argc != 4) {
        printf("Wrong number of arguments.\n");
        printf("Usage: %s <old word> <new word> <filename>\n", argv[0]);
        exit(1);
    }
    FILE *fp, *temp;
    char word[20], ch;
    fp = fopen(argv[3], "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error: ");
        exit(1);
    }
    for (int i = 0; (word[i] = fgetc(fp)) != EOF; i++) {
        if (EndOfWord) {
            ch = word[i];
            word[i] = '\0';
            if (strcmp(argv[1], word) == 0) {
                fputs(argv[2], temp);
            } 
            else {
                fputs(word, temp);
            }
            fputc(ch, temp);
            i = -1;
        }
    }
    fclose(fp);
    fclose(temp);
    remove(argv[3]);
    rename("temp.txt", argv[3]);
    return 0;
}