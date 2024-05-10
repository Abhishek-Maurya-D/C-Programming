#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *fp;
    char arr[13][15], source[20], ch, s[15];
    printf("Enter the name of the file: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    fp = fopen(source, "r+");
    if (fp == NULL) {
        printf("File can't be open.");
        exit(0);
    }
    int j = 0, i = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch != '\n') {
            arr[j][i] = ch;
            i++;
        } else {
            arr[j][i] = '\0';
            j++;
            i = 0;
        }
    }
    for (int i = 0; i < 13; i++) {
        for (int j = i + 1; j < 13; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(s, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], s);
            }
        }
    }
    for (int i = 0; i < 13; i++)
        printf("%s\n", arr[i]);
    fclose(fp);
    return 0;
}