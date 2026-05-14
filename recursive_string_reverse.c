#include <stdio.h>

// Function prototype
void stringReverse(char str[]);

// Main function
int main() {

    char str[100];

    printf("Please enter a word you would like to reverse: ");
    scanf("%s", str);

    stringReverse(str);

    printf("\n");

    return 0;
}

// Recursive function definition
void stringReverse(char str[]) {

    // Base case --> end of string
    if (*str == '\0')
        return;

    // Recursive call
    stringReverse(str + 1);

    // Print character after recursion returns
    printf("%c", *str);
}
