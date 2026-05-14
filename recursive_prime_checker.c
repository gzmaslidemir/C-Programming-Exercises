#include <stdio.h>

// Function prototype
int isPrime(int n, int i);

int main(void) {

    int num;

    // Ask user for a number
    printf("Please enter any integer number: ");
    scanf("%d", &num);

    // Negative or small numbers are not prime
    if (num < 2) {
        printf("This is not a prime number");
        return 0;
    }

    // Call the recursive function
    if (isPrime(num, 2))
        printf("This is a prime number");
    else
        printf("This is not a prime number");

    return 0;
}

// Recursive function definition
int isPrime(int n, int i) {

    // If i*i > n, no divisors left --> number is prime
    if (i * i > n)
        return 1;

    // If divisible by i --> number is not prime
    if (n % i == 0)
        return 0;

    // Recursive step --> check next divisor
    return isPrime(n, i + 1);
}
