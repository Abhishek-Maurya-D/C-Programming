#include <stdio.h>

void exampleFunction() {
    // 'count' is an automatic variable with static storage class
    auto int count = 0;

    // Increment and print the value
    printf("Count: %d\n", ++count);
}

int main() {
    exampleFunction();  // Output: Count: 1
    exampleFunction();  // Output: Count: 2
    exampleFunction();  // Output: Count: 3

    return 0;
}
