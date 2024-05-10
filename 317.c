#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

void storeNamesToFile(const char *filename, char names[MAX_STUDENTS][50], int numStudents) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s\n", names[i]);
    }

    fclose(file);
}

void displayNthName(const char *filename, int n) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char name[50];
    int count = 1;

    while (fgets(name, sizeof(name), file) != NULL) {
        if (count == n) {
            printf("Name at position %d: %s", n, name);
            fclose(file);
            return;
        }
        count++;
    }

    printf("Position %d is out of range.\n", n);
    fclose(file);
}

int main() {
    char names[MAX_STUDENTS][50];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter the names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    storeNamesToFile("student_names.txt", names, numStudents);

    int position;
    printf("Enter the position to display (1 to %d): ", numStudents);
    scanf("%d", &position);

    displayNthName("student_names.txt", position);

    return 0;
}
