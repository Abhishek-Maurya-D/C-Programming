#include <stdio.h>
int main() {
    printf("Countdown: 3\r");
    // fflush(stdout); // Flush the output buffer to ensure immediate display
    // Some time-consuming operation
    // (in a real scenario, you might have a loop or delay here)
    printf("Countdown: 2\r");
    // fflush(stdout);
    // More processing...
    printf("Countdown: 1\r");
    // fflush(stdout);
    // Final step...
    printf("Countdown: 0\n");
    return 0;
}