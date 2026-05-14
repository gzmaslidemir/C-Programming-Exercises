#include <stdio.h>

// Display bits of an unsigned integer
void displayBits(unsigned int value) {

    unsigned int displayMask = 1 << 31;

    for (unsigned int c = 1; c <= 32; ++c) {

        putchar(value & displayMask ? '1' : '0');

        value <<= 1;

        // Print space after every 8 bits
        if (c % 8 == 0) {
            putchar(' ');
        }
    }
}

// Reverse all 32 bits of an unsigned integer
unsigned int reverseBits(unsigned int value) {

    unsigned int reversed = 0;

    for (unsigned int i = 0; i < 32; ++i) {

        reversed <<= 1;

        reversed |= (value & 1);

        value >>= 1;
    }

    return reversed;
}

int main(void) {

    unsigned int number;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    // Display original bits
    printf("\nOriginal bits:\n");
    displayBits(number);

    // Reverse bits
    unsigned int reverse = reverseBits(number);

    // Display reversed bits
    printf("\n\nReversed bits:\n");
    displayBits(reverse);

    printf("\n");

    return 0;
}
