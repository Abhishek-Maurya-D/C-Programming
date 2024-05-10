// Important Concept
// link with source.txt
// link with target.txt


#include <stdio.h>
#include <stdlib.h>
struct date {
    int d, m, y;
};
struct employee {
    int empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};
void swap(struct employee *a, struct employee *b) {
    struct employee temp = *a;
    *a = *b;
    *b = temp;
}
int compare_dates(struct date d1, struct date d2) {
    if (d1.y != d2.y) return d1.y - d2.y;
    if (d1.m != d2.m) return d1.m - d2.m;
    return d1.d - d2.d;
}
void bubble_sort(struct employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare_dates(arr[j].join_date, arr[j + 1].join_date) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main() {
    FILE *sourceFile, *targetFile;
    sourceFile = fopen("source.txt", "r");
    targetFile = fopen("target.txt", "w");
    if (sourceFile == NULL || targetFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }
    int num_records = 5;
    struct employee records[5];
    for (int i = 0; i < num_records; i++) {
        fscanf(sourceFile, "%6d %19s %d %d %d %f",
               &records[i].empcode, records[i].empname,
               &records[i].join_date.d, &records[i].join_date.m, &records[i].join_date.y,
               &records[i].salary);
    }
    bubble_sort(records, num_records);
    for (int i = 0; i < num_records; i++) {
        fprintf(targetFile, "%6d %s %d-%d-%d %.2f\n",
                records[i].empcode, records[i].empname,
                records[i].join_date.d, records[i].join_date.m, records[i].join_date.y,
                records[i].salary);
    }
    fclose(sourceFile);
    fclose(targetFile);
    printf("Records sorted and written to target.txt.\n");
    return 0;
}