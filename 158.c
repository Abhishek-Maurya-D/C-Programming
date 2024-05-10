// Important
// when you pass an array as an argument to a function, what actually gets passed?

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    printArray(myArray, length);

    return 0;
}
