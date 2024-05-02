#include <stdio.h>

// Function prototypes
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {
    char operator;
    double num1, num2, result;

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on operator
    switch(operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit program with error
    }

    // Print the result
    printf("Result: %lf\n", result);

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        printf("Error! Division by zero.\n");
        return -1; // Indicate error
    }
}
