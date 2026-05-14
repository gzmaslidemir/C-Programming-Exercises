#include <stdio.h>

// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main(void)
{
    // Array of function pointers
    void (*f[4])(double, double) = {add, subtract, multiply, divide};

    int choice = 0;
    double x, y;

    printf("Calculator Using Function Pointers\n");
    printf("0. Add\n1. Subtract\n2. Multiply\n3. Divide\n4. Exit\n");
    printf("Enter your choice (0-4): ");
    scanf("%d", &choice);

    while (choice >= 0 && choice < 4)
    {
        printf("Enter first number: ");
        scanf("%lf", &x);

        printf("Enter second number: ");
        scanf("%lf", &y);

        // Call selected function
        (*f[choice])(x, y);

        printf("\n0. Add\n1. Subtract\n2. Multiply\n3. Divide\n4. Exit\n");
        printf("Enter your choice (0-4): ");
        scanf("%d", &choice);
    }

    return 0;
}

// Function definitions

void add(double a, double b)
{
    printf("You selected add.\n");
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(double a, double b)
{
    printf("You selected subtract.\n");
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(double a, double b)
{
    printf("You selected multiply.\n");
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}

void divide(double a, double b)
{
    if (b == 0.0)
    {
        printf("You selected divide.\n");
        printf("Error: Cannot divide by zero!\n");
    }
    else
    {
        printf("You selected divide.\n");
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    }
}
