// Most Important

#include <stdio.h>
#include <string.h>

// Function to multiply two numbers represented as strings
void multiply(char num1[], char num2[], char result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;

    // Initialize result array with 0
    int product[len_result];
    for (int i = 0; i < len_result; i++) {
        product[i] = 0;
    }

    // Multiply each digit and add to the result
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';

            // Multiply digits and add to the result
            int temp = digit1 * digit2 + product[i + j + 1];
            product[i + j] += temp / 10;
            product[i + j + 1] = temp % 10;
        }
    }

    // Convert result array to string
    int index = 0;
    while (index < len_result && product[index] == 0) {
        index++;
    }

    if (index == len_result) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    for (int i = 0; i < len_result - index; i++) {
        result[i] = product[index + i] + '0';
    }
    result[len_result - index] = '\0';
}

int main() {
    char num1[201];  // Assuming 200-digit numbers plus null terminator
    char num2[201];
    char result[401];  // Result may have up to 400 digits plus null terminator

    // Input the two 200-digit numbers
    printf("Enter the first 200-digit number: ");
    scanf("%s", num1);

    printf("Enter the second 200-digit number: ");
    scanf("%s", num2);

    // Perform multiplication
    multiply(num1, num2, result);

    // Output the result
    printf("Multiplication Result: %s\n", result);

    return 0;
}
