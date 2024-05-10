// Most Important 

#include<stdio.h>
#define ROWS 4
#define COLS 5
void circularLeftShiftByTwo(int arr[], int size, int shift) {
    int temp[shift];
    for (int i = 0; i < shift; ++i) {
        temp[i] = arr[i];
    }
    for (int i = shift; i < size; ++i) {
        arr[i - shift] = arr[i];
    }
    for (int i = 0; i < shift; ++i) {
        arr[size - shift + i] = temp[i];
    }
}
void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[ROWS][COLS] = {
        {15, 30, 28, 19, 61},
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40, 50},
        {7, 14, 21, 28, 35}
    };
    printf("Original Matrix:\n");
    displayMatrix(matrix);
    // Circular left shift for each row
    for (int i = 0; i < ROWS; ++i) {
        circularLeftShiftByTwo(matrix[i], COLS, 2);
    }
    printf("\nMatrix after Circular Left Shift by Two Positions:\n");
    displayMatrix(matrix);
    return 0;
}