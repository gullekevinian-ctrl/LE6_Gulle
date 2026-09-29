/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

// Function declarations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    printf("Multiple functions to perform Arithmetic Operations\n");

    while (1) {
        // Ask for numbers
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        // Display menu
        printf("\nChoose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n");

        printf("Enter choice [1-5]: ");
        scanf("%d", &choice);

        // Perform selected operation
        switch (choice) {
            case 1:
                result = addition(num1, num2);
                printf("\n%.0f + %.0f = %.0f\n", num1, num2, result);
                break;

            case 2:
                result = subtraction(num1, num2);
                printf("\n%.0f - %.0f = %.0f\n", num1, num2, result);
                break;

            case 3:
                result = multiplication(num1, num2);
                printf("\n%.0f x %.0f = %.0f\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\nError: Cannot divide by zero.\n");
                } else {
                    result = division(num1, num2);
                    printf("\n%.0f / %.0f = %.2f\n", num1, num2, result);
                }
                break;

            case 5:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice. Please choose from 1 to 5.\n");
        }
    }

    return 0;
}

// Addition function
float addition(float a, float b) {
    return a + b;
}

// Subtraction function
float subtraction(float a, float b) {
    return a - b;
}

// Multiplication function
float multiplication(float a, float b) {
    return a * b;
}

// Division function
float division(float a, float b) {
    return a / b;
}