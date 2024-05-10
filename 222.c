#include <stdio.h>
char units[][6] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char teens[][12] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char tens[][8] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
void display(int num){
    int hundreds = num / 100;
    int lastTwodigit = (num % 100);   
        if (hundreds > 0) {
            printf("%s Hundred ", units[hundreds]);
        }
        if (lastTwodigit > 0) {
            if (lastTwodigit >= 11 && lastTwodigit <= 19) {
                printf("%s ", teens[lastTwodigit - 10]);
            } else {
                int tensd = (lastTwodigit / 10);
                int onesd = (lastTwodigit % 10);
                if (tensd > 0) {
                    printf("%s ", tens[tensd]);
                }
                if (onesd > 0) {
                    printf("%s ", units[onesd]);
                }
            }
        }
}
void printNumberInWords(int num) {
    if (num < 0 || num > 999999999) {
        printf("Number out of range (0 - 999999999).\n");
        return;
    }
    if (num == 0) {
        printf("Zero\n");
        return;
    }
    int billions = num / 1000000000;
    int millions = (num / 1000000) % 1000;
    int thousands = (num / 1000) % 1000;
    int remainder = num % 1000;
    if (millions > 0) {
        display(millions);
        printf("Millions ");
    }
    if (thousands > 0) {
        display(thousands);
        printf("Thousands ");
    }
    if (remainder > 0) {
        display(remainder);
    printf("\n");
    }
}
int main() {
    int num;
    printf("Enter an integer (up to nine digits): ");
    scanf("%d", &num);
    printNumberInWords(num);
    return 0;
}