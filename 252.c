#include<stdio.h>

int main() {
    char name[4][30], writer[4][20];
    float price[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter the Name, Writer's Name & Price: \n");
        scanf(" %[^\n] %[^\n] %f", name[i], writer[i], &price[i]);
    }

    for (int i = 0; i < 4; i++)
        printf("%-26s %-15s %9.2f\n", name[i], writer[i], price[i]);

    return 0;
}
