#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Finding the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Finding the last digit
    lastDigit = number % 10;

    // Output the results
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
