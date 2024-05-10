#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 450

struct student {
    int rollno;
    char name[20];
    char department[20];
    char course[20];
    int yearjoin;
};

struct student students[MAX_STUDENTS];

void printNamesJoinedInAYear(int year) {
    printf("Students who joined in the year %d:\n", year);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (students[i].yearjoin == year) {
            printf("%s\n", students[i].name);
        }
    }
}

void printStudentData(int roll) {
    int found = 0;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (students[i].rollno == roll) {
            printf("Student Data:\n");
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearjoin);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", roll);
    }
}

int main() {
    // Assume you have populated the 'students' array with data

    // Example: Populate some sample data
    students[0] = (struct student){1, "John", "Computer Science", "B.Tech", 2020};
    students[1] = (struct student){2, "Alice", "Electrical Engineer", "M.Tech", 2021};
    // Add more students as needed

    int input;
    do {
        printf("\tEnter the choice(1-3): \n");
        printf("1. Print the Names of Students who joined in a particular year.\n");
        printf("2. Print Student Data by Roll Number.\n");
        printf("3. Exit\n");
        scanf("%d", &input);

        switch (input) {
            case 1: {
                int year;
                printf("Enter the year: ");
                scanf("%d", &year);
                printNamesJoinedInAYear(year);
                break;
            }
            case 2: {
                int roll;
                printf("Enter the roll number: ");
                scanf("%d", &roll);
                printStudentData(roll);
                break;
            }
            case 3:
                break;
            default:
                printf("Invalid option choice. Please enter between 1 to 3.\n");
        }

        while (getchar() != '\n')
            ;
    } while (input != 3);

    return 0;
}
