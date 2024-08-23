#include <stdio.h>

int main() {
    int num, original_num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    // Find the last digit
    last_digit = num % 10;

    // Find the first digit
    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;

    // Calculate the sum
    sum = first_digit + last_digit;

    printf("Sum of first and last digits of %d: %d\n", original_num, sum);

    return 0;
}